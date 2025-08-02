#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 998244353;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int factorial(int n)
{
      int ans = 1;
      for (int i = 1; i <= n; i++)
      {
            ans = (1ll * ans * i) % mod;
      }
      return ans;
}

void solve()
{
      int n;
      cin >> n;
      int x = factorial(n);
      cout << x % mod;
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