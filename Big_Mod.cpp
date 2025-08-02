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
      if (n == 0)
            return 1 % mod;
      int cur = power(x, n / 2, mod);
      if (n % 2 == 0)
      {
            return 1ll * cur % mod * cur % mod;
      }
      else
      {
            return 1ll * cur % mod * cur % mod * x % mod;
      }
}
void solve()
{
      int b, p, m;
      cin >> b >> p >> m;
      cout << power(b, p, m) << '\n';
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