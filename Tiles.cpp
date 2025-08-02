#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 998244353;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int power(int n, int x)
{
      int ans = 1 % mod;
      while (x > 0)
      {
            if (x & 1)
            {
                  ans = 1ll * ans * n % mod;
            }
            n = 1ll * n * n % mod;
            x >>= 1;
      }
      return ans;
}

void solve()
{
      int w, h;
      cin >> w >> h;
      int x = w + h;
      int n = 2;
      cout << power(n, x) << '\n';
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