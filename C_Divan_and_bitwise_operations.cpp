#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9 + 7;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int n, m;
      cin >> n >> m;
      int total_or = 0;
      for (int i = 0; i < m; i++)
      {
            int l, r, x;
            cin >> l >> r >> x;
            total_or |= x;
      }

      int ans = 1;
      for (int i = 0; i < n - 1; i++)
      {
            ans = (ans * 2) % mod;
      }

      ans = 1ll * ans * total_or % mod;

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