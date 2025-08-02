#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int power(int b, int n, int mod)
{
      if (n == 0)
            return 1 % mod;
      int cur = power(b, n / 2, mod);
      if (n % 2 == 0)
      {
            return 1ll * cur * cur % mod;
      }
      else
      {
            return 1ll * cur * cur % mod * b % mod;
      }
}
void solve()
{
      int a, b, n;
      cin >> a >> b >> n;
      cout << a * power(b, n - 2, n) % n << '\n';
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