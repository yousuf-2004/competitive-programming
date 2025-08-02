#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
double c;
const double N = 1e6;
double f(double x)
{
      return x * x + sqrt(x);
}
void solve()
{
      cin >> c;
      double l = 0, r = N, ans = 0;
      int cnt = 100;
      while (cnt--)
      {
            double mid = (l + r) / 2;
            if (f(mid) >= c)
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