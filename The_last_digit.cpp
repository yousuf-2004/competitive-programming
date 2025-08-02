#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int power(int base, int exp, int mod)
{
      int result = 1;
      while (exp > 0)
      {
            if (exp & 1)
                  result = 1ll * result * base % mod;
            base = 1ll * base * base % mod;
            exp >>= 1;
      }
      return result;
}

void solve()
{
      int a, b;
      cin >> a >> b;
      cout << power(a, b, 10) << '\n';
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