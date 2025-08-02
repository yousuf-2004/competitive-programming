#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int n, k;
const int N = 1e4 + 9;
const double M = 1e7 + 9;
vector<int> v(N);
bool f(double x)
{
      double cnt = 0;
      for (int i = 0; i < n; i++)
      {
            cnt += floor(v[i] / x);
            if (cnt >= k)
            {
                  return true;
            }
      }
      return false;
}
void solve()
{
      cin >> n >> k;
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      double l = 0, r = M, ans = 0;
      int cnt = 100;
      while (cnt--)
      {
            double mid = (l + r) / 2;
            if (f(mid))
            {
                  ans = mid;
                  l = mid;
            }
            else
            {
                  r = mid;
            }
      }
      cout << fixed << setprecision(10) << ans << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}