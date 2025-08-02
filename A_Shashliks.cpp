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
      int k, a, b, x, y;
      cin >> k >> a >> b >> x >> y;

      int cnt1 = 0, cnt2 = 0;
      if (x < y)
      {
            if (k >= a)
            {
                  cnt1 = (k - a) / x + 1;
                  k -= cnt1 * x;
            }
            if (k >= b)
            {
                  cnt2 = (k - b) / y + 1;
                  k -= cnt2 * y;
            }
      }
      else
      {
            if (k >= b)
            {
                  cnt2 = (k - b) / y + 1;
                  k -= cnt2 * y;
            }
            if (k >= a)
            {
                  cnt1 = (k - a) / x + 1;
                  k -= cnt1 * x;
            }
      }

      cout << (cnt1 + cnt2) << "\n";
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