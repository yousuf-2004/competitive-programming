#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
char v[1005][1005];
char ch[4005];
void solve()
{
      int n, m;
      cin >> n >> m;
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      int cnt = 0;
      for (int i = 0; (i + 1) * 2 <= n && (i + 1) * 2 <= m; i++)
      {
            int pos = 0;
            for (int j = i; j < m - i; j++)
            {
                  ch[pos++] = v[i][j];
            }
            for (int j = i + 1; j < n - i - 1; j++)
            {
                  ch[pos++] = v[j][m - i - 1];
            }
            for (int j = m - i - 1; j >= i; j--)
            {
                  ch[pos++] = v[n - i - 1][j];
            }
            for (int j = n - i - 2; j >= i + 1; j--)
            {
                  ch[pos++] = v[j][i];
            }

            for (int j = 0; j < pos; j++)
            {
                  if (ch[j] == '1' && ch[(j + 1) % pos] == '5' && ch[(j + 2) % pos] == '4' && ch[(j + 3) % pos] == '3')
                  {
                        cnt++;
                  }
            }
      }
      cout << cnt << '\n';
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