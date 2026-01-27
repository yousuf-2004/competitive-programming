#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
void magical_spiral(int n)
{
      vector<vector<int>> arr(n, vector<int>(n, -1));

      int x, y;
      if (n % 2 == 0)
      {
            x = n / 2 - 1;
            y = n / 2 - 1;
      }
      else
      {
            x = n / 2;
            y = n / 2;
      }

      arr[x][y] = 0;
      int value = 1;
      int step = 1;

      vector<pair<int, int>> dir = {
          {0, 1},  // right
          {1, 0},  // down
          {0, -1}, // left
          {-1, 0}  // up
      };

      while (value < 1LL * n * n)
      {
            for (int d = 0; d < 4; d++)
            {
                  int steps = step;

                  if (d % 2 == 1)
                        step++;
                  auto [dx, dy] = dir[d];

                  for (int i = 0; i < steps; i++)
                  {
                        x += dx;
                        y += dy;

                        if (x >= 0 && x < n && y >= 0 && y < n && arr[x][y] == -1)
                        {
                              arr[x][y] = value;
                              value++;
                        }

                        if (value >= 1LL * n * n)
                              break;
                  }

                  if (value >= 1LL * n * n)
                        break;
            }
      }

      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < n; j++)
            {
                  cout << arr[i][j] << (j + 1 < n ? ' ' : '\n');
            }
      }
}

void solve()
{
      int n;
      cin >> n;
      magical_spiral(n);
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