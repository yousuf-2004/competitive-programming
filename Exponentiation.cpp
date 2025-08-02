#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9 + 7;
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
            return 1ll * cur * cur % mod;
      }
      else
      {
            return 1ll * cur * cur % mod * x % mod;
      }
}
void solve()
{
      int x, n;
      cin >> x >> n;
      cout << power(x, n, mod) << '\n';
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