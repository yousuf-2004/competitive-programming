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
      int a[n][m];
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  cin >> a[i][j];
            }
      }

      int dx[] = {1, -1, 0, 0};
      int dy[] = {0, 0, 1, -1};
      auto isvalid = [&](int x, int y)
      {
            return x >= 0 && x < n && y >= 0 && y < m;
      };

      vector<int> type(n * m + 1);
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  type[a[i][j]] = max(type[a[i][j]], 1ll);
                  for (int k = 0; k < 4; k++)
                  {
                        int x = i + dx[k];
                        int y = j + dy[k];
                        if (isvalid(x, y) && a[x][y] == a[i][j])
                        {
                              type[a[i][j]] = 2;
                        }
                  }
            }
      }

      if (*max_element(type.begin(), type.end()) == 1)
      {
            cout << accumulate(type.begin(), type.end(), 0ll) - 1 << '\n';
      }
      else
      {
            cout << accumulate(type.begin(), type.end(), 0ll) - 2 << '\n';
      }
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