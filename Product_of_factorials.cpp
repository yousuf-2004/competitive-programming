#include <bits/stdc++.h>
#define int long long
#define i128 __int128
using namespace std;

const int mod = 109546051211;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int factorial(int n, int mod)
{
      int ans = 1;
      for (int i = 1; i <= n; i++)
      {
            ans = (1ll * ans * i % mod);
      }
      return ans % mod;
}
void solve()
{
      int n;
      cin >> n;
      int ans = 1;
      for (int i = 1; i <= n; i++)
      {
            ans = (i128)ans * factorial(i, mod) % mod;
      }
      cout << ans << '\n';
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