#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int n, k;
      cin >> n >> k;
      
      int ans = n;

      for (int j = 1; j * j <= n; j++)
      {
            if (n % j == 0)
            {
                  if (j <= k)
                  {
                        ans = min(ans, n / j);
                  }

                  if (n / j <= k)
                  {
                        ans = min(ans, j);
                  }
            }
      }

      cout << ans << endl;
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