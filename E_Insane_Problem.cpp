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
      int k, l1, r1, l2, r2;
      cin >> k >> l1 >> r1 >> l2 >> r2;

      int ans = 0;
      int p = 1;
      while (true)
      {
            if (p > 0 && r2 / p < l1)
            {
                  break;
            }
            int lowX = max(l1, (l2 + p - 1) / p);
            int highX = min(r1, r2 / p);

            if (lowX <= highX)
            {
                  ans += (highX - lowX + 1);
            }

            if (p > r2 / k)
            {
                  break;
            }
            p *= k;
      }

      cout << ans << '\n';
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