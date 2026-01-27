#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int c, m, x;
      cin >> c >> m >> x;
      int n = c + m + x;
      int l = 0, r = (n / 3) + 1;
      while (l + 1 < r)
      {
            int mid = (l + r) / 2;
            if (mid <= c && mid <= m && 3 * mid <= n)
            {
                  l = mid;
            }
            else
            {
                  r = mid;
            }
      }

      cout << l << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}
// TC=nlog(n);
// Here is O(1) solution:
/*
        int c, m, x;
        cin >> c >> m >> x;

        int d = max(c, m) - min(c, m);
        x += d;
        if (c > m) c -= d;
        else m -= d;

        int ans = min({c, m, x});
        c -= ans;
        m -= ans;
        x -= ans;

        ans += (c + m) / 3;
        cout << ans << '\n';

 */

// One line implementation:
/*
       long long c, m, x;
       cin >> c >> m >> x;
       cout << min({ (c + m + x) / 3, c, m }) << '\n';
 */