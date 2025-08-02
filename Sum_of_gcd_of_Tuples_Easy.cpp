#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

void solve()
{
      int n;
      cin >> n;
      int ans = 0;
      for (int i = 1; i <= n; i++)
      {
            for (int j = 1; j <= n; j++)
            {
                  for (int k = 1; k <= n; k++)
                  {
                        int g = __gcd(__gcd(i, j), k);
                        ans += g;
                  }
            }
      }
      cout << ans << "\n";
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}