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
      int n, m;
      cin >> n >> m;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      vector<int> rem(m);
      for (int i = 0; i < n; i++)
      {
            rem[v[i] % m]++;
      }

      int ans = 0;

      for (int i = 0; i < m; i++)
      {
            int x = rem[i];
            int y = rem[(m - i) % m];
            if (x == 0 and y == 0)
            {
                  continue;
            }

            int temp = min(x, y); //getting which has less frequency;

            x -= min(temp + 1, x);
            y -= min(temp + 1, y);

            ans++;

            ans += (x + y); //handling left number that's is failed to be part of subset.

            rem[i] = 0;
            rem[(m - i) % m] = 0;
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