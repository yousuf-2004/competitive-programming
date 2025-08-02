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
      int l, r;
      cin >> l >> r;

      int ans = l;
      for (int i = 0; i < 62; i++)
      {
            if ((ans | (1ll << i)) <= r)
            {
                  ans |= (1ll << i);
            }
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