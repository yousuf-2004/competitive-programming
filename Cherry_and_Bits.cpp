#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
char ara[N][N];
int pre[N][N];

void solve()
{
      int n, m;
      cin >> n >> m;
      for (int i = 1; i <= n; ++i)
      {
            for (int j = 1; j <= m; ++j)
                  cin >> ara[i][j];
      }
      int q;
      cin >> q;
      while (q--)
      {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            pre[x1][y1] += 1;
            pre[x2 + 1][y2 + 1] += 1;
            pre[x2 + 1][y1] -= 1;
            pre[x1][y2 + 1] -= 1;
      }

      for (int i = 1; i <= n; ++i)
      {
            for (int j = 1; j <= m; ++j)
            {
                  pre[i][j] += pre[i][j - 1] + pre[i - 1][j] - pre[i - 1][j - 1];
            }
      }
      for (int i = 1; i <= n; ++i)
      {
            for (int j = 1; j <= m; ++j)
            {
                  if (pre[i][j] & 1)
                        ara[i][j] ^= 1;
            }
      }
      for (int i = 1; i <= n; ++i)
      {
            for (int j = 1; j <= m; ++j)
                  cout << ara[i][j];
            cout << "\n";
      }
}

int main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int t = 1;
      //  cin >> t;
      while (t--)
            solve();
}