#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 9;
const double MAX = 1e9;
int n, x[N], v[N];
double lf[N], rt[N];
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
bool ok(double t)
{
      for (int i = 1; i <= n; i++)
      {
            lf[i] = x[i] - t * v[i];
            rt[i] = x[i] + t * v[i];
      }
      double left_max = -1e40;
      for (int i = 1; i <= n; i++)
      {
            left_max = max(left_max, lf[i]);
      }
      double right_min = 1e40;
      for (int i = 1; i <= n; i++)
      {
            right_min = min(right_min, rt[i]);
      }
      return left_max <= right_min;
}
void solve()
{
      cin >> n;
      for (int i = 1; i <= n; i++)
      {
            cin >> x[i] >> v[i];
      }
      double l = 0, r = MAX, ans = 0;
      int itr = 100;
      while (itr--)
      {
            double mid = (l + r) / 2;
            if (ok(mid))
            {
                  ans = mid;
                  r = mid;
            }
            else
            {
                  l = mid;
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