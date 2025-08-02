#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistent;

        Stay Hungry;
*/

void solve()
{
      int n, m;
      cin >> n >> m;
      vector<vector<int>> v(n, vector<int>(m));
      vector<pair<int, int>> sum(n);

      for (int i = 0; i < n; i++)
      {
            int s = 0;
            for (int j = 0; j < m; j++)
            {
                  cin >> v[i][j];
                  s += v[i][j];
            }
            sum[i] = {s, i};
      }

      sort(sum.rbegin(), sum.rend());

      vector<vector<int>> v1(n);
      for (int i = 0; i < n; i++)
      {
            v1[i] = v[sum[i].second];
      }

      int x = n * m;
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  ans += x * v1[i][j];
                  x--;
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
