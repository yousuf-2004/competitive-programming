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
      int n;
      cin >> n;
      vector<int> v(n + 1);
      for (int i = 1; i <= n; i++)
      {
            cin >> v[i];
      }
      int ans = 0;
      for (int i = 1; i <= n; i++)
      {
            if (v[i] <= 0)
            {
                  continue;
            }
            for (int k = v[i]; k <= 2 * n; k += v[i])
            {
                  int j = k - i;
                  if (j <= i || j > n)
                  {
                        continue;
                  }
                  if (v[j] == k / v[i])
                  {
                        ans++;
                  }
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