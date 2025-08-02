#include <bits/stdc++.h>
#define int long long
using namespace std;

const int inf = LLONG_MIN;
int n, m, max_sum;
vector<vector<int>> a;

/*
        Yousuf Ibrahim

        Be Consistent;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

void path(int i, int j, int total_sum)
{
      if (i == n - 1 && j == m - 1)
      {
            max_sum = max(max_sum, total_sum);
            return;
      }

      if (i + 1 < n)
      {
            path(i + 1, j, total_sum + a[i + 1][j]);
      }

      if (j + 1 < m)
      {
            path(i, j + 1, total_sum + a[i][j + 1]);
      }
}

void solve()
{
      cin >> n >> m;
      a = vector<vector<int>>(n, vector<int>(m));
      max_sum = inf;

      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  cin >> a[i][j];
            }
      }
      path(0, 0, a[0][0]);

      cout << max_sum << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}
