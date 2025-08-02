#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int mod = 1e9 + 7;
void solve()
{
      int n, k;
      cin >> n >> k;
      int ans = 1;
      for (int i = 0; i < k; i++)
      {
            ans = 1ll * n * ans % mod;
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