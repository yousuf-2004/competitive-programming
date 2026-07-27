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
      int H, W;
      cin >> H >> W;

      int dx[] = {-1, 1, 0, 0};
      int dy[] = {0, 0, -1, 1};

      for (int i = 0; i < H; i++)
      {
            for (int j = 0; j < W; j++)
            {
                  int cnt = 0;
                  for (int d = 0; d < 4; d++)
                  {
                        int ni = i + dx[d];
                        int nj = j + dy[d];
                        if (ni >= 0 && ni < H && nj >= 0 && nj < W)
                        {
                              cnt++;
                        }
                  }
                  cout << cnt << (j == W - 1 ? '\n' : ' ');
            }
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}