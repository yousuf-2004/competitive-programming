#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int fib(int n)
{
      if (n == 1)
            return 0;
      if (n == 2)
            return 1;
      int cur = 0;
      int prev1 = 0, prev2 = 1;
      for (int i = 3; i <= n; i++)
      {
            cur = prev1 + prev2;
            prev1 = prev2;
            prev2 = cur;
      }
      return cur;
}
void solve()
{
      int n;
      cin >> n;
      int ans = fib(n);
      cout << ans << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}