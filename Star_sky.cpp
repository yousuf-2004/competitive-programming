#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5 + 9;
const int C = 101;
const int P = 11;

int n, q, c;
int cnt[P][C][C];

int main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cin >> n >> q >> c;

      for (int i = 0; i < n; i++)
      {
            int x, y, s;
            cin >> x >> y >> s;
            cnt[s][x][y]++;
      }

      for (int p = 0; p <= c; p++)
      {
            for (int i = 1; i < C; i++)
            {
                  for (int j = 1; j < C; j++)
                  {
                        cnt[p][i][j] += cnt[p][i - 1][j] + cnt[p][i][j - 1] - cnt[p][i - 1][j - 1];
                  }
            }
      }

      for (int i = 0; i < q; i++)
      {
            int t, x1, y1, x2, y2;
            cin >> t >> x1 >> y1 >> x2 >> y2;
            int ans = 0;
            for (int p = 0; p <= c; p++)
            {
                  int brightness = (p + t) % (c + 1);
                  int amount = cnt[p][x2][y2] - cnt[p][x1 - 1][y2] - cnt[p][x2][y1 - 1] + cnt[p][x1 - 1][y1 - 1];
                  ans += brightness * amount;
            }
            cout << ans << endl;
      }

      return 0;
}
