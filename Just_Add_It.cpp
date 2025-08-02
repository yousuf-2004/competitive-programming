#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 10000007;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int power(int n, int k)
{
      int ans = 1 % mod;
      while (k > 0)
      {
            if (k & 1)
            {
                  ans = 1ll * ans * n % mod;
            }
            n = 1ll * n * n % mod;
            k >>= 1;
      }
      return ans;
}

void solve()
{
      int n, k;
      while (cin >> n >> k)
      {
            if (n == 0 and k == 0)
            {
                  return;
            }

            int ans = (2 * power(n - 1, k) % mod + power(n, k)) % mod;
            ans += (2 * power(n - 1, n - 1) % mod + power(n, n)) % mod;
            ans %= mod;
            cout << ans << '\n';
      }
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