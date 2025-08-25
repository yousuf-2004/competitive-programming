#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int power(int x, int n, int mod)
{
      int ans = 1 % mod;
      while (n > 0)
      {
            if (n & 1)
            {
                  ans = 1ll * ans * x % mod;
            }
            x = 1ll * x * x % mod;
            n >>= 1;
      }
      return ans;
}

int f(int x, int a, int mod)
{
      if (x == 0)
      {
            return 1 % mod;
      }
      if (x & 1)
      {
            int p = x / 2;
            int cur = f(p, a, mod);
            int ans = (cur + 1ll * cur * power(a, p + 1, mod) % mod) % mod;
            return ans;
      }
      else
      {
            int ans = (f(x - 1, a, mod) + power(a, x, mod)) % mod;
            return ans;
      }
}

void solve()
{
      int a, x, m;
      cin >> a >> x >> m;
      cout << f(x - 1, a, m) << '\n';
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