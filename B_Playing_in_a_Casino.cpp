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
      vector<vector<int>> v(n, vector<int>(m));
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  cin >> v[i][j];
            }
      }
      int ans = 0;
      vector<int> col(n);
      for (int j = 0; j < m; j++)
      {
            for (int i = 0; i < n; i++)
            {
                  col[i] = v[i][j];
            }
            sort(col.begin(), col.end());
            int prefix = 0;
            for (int k = 0; k < n; k++)
            {
                  ans += (k)*col[k] - prefix;
                  prefix += col[k];
            }
      }

      cout << ans << "\n";
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