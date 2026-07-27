#include <bits/stdc++.h>
#define int long long
#define ld long double
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
bool ok(const vector<ld> &x, const vector<ld> &v, ld t)
{
      ld left = -1e18, right = 1e18;

      for (int i = 0; i < x.size(); i++)
      {
            left = max(left, x[i] - v[i] * t);
            right = min(right, x[i] + v[i] * t);

            if (left > right)
            {
                  return false;
            }
      }
      return true;
}

void solve()
{
      int n;
      cin >> n;
      vector<ld> x(n), v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> x[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      ld l = 0.0, r = 1e18, ans = 0;
      for (int i = 1; i <= 100; i++)
      {
            ld mid = (l + r) / 2;
            if (ok(x, v, mid))
            {
                  ans = mid;
                  r = mid;
            }
            else
            {
                  l = mid;
            }
      }
      cout << fixed << setprecision(12) << ans << '\n';
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