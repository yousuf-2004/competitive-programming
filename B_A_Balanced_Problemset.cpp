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
      int x, n;
      cin >> x >> n;
      int ans = 1;
      for (int i = 1; i * i <= x; i++)
      {
            if (x % i == 0)
            {
                  if (n <= x / i)
                        ans = max(ans, i);
                  if (n <= i)
                        ans = max(ans, x / i);
            }
      }
      cout << ans << '\n';
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