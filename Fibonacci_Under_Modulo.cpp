#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 998244353;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int fib(int n)
{
      if (n <= 1)
      {
            return n;
      }

      int prev1 = 0, prev2 = 1, cur;
      for (int i = 2; i <= n; i++)
      {
            cur = (prev1 + prev2) % mod;
            prev1 = prev2;
            prev2 = cur;
      }
      return cur % mod;
}
void solve()
{
      int n;
      cin >> n;
      cout << fib(n) << '\n';
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