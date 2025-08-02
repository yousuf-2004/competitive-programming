
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
      int n, m, k;
      cin >> n >> m >> k;
      int x, y;
      cin >> x >> y;
      string ans = "YES\n";
      for (int i = 0; i < k; ++i)
      {
            int xx, yy;
            cin >> xx >> yy;
            if ((x + y) % 2 == (xx + yy) % 2)
            {
                  ans = "NO\n";
            }
      }
      cout << ans;
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