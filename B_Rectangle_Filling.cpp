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
      char c[n][m];
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  cin >> c[i][j];
            }
      }
      if (c[0][0] == c[n - 1][m - 1] || c[n - 1][0] == c[0][m - 1])
      {
            cout << "YES\n";
            return;
      }
      int f1 = 0, f2 = 0, f3 = 0, f4 = 0;
      char c1 = c[0][0];
      for (int i = 0; i < m; i++)
      {
            if (c[0][i] != c[0][0])
                  f1 = 1;
            if (c[0][i] != c[0][m - 1])
                  f2 = 1;
            if (c[n - 1][i] != c[n - 1][0])
                  f3 = 1;
            if (c[n - 1][i] != c[n - 1][m - 1])
                  f4 = 1;
      }
      for (int i = 0; i < n; i++)
      {
            if (c[i][0] != c[0][0] && f1 == 1)
                  f1++;
            if (c[i][0] != c[n - 1][0] && f4 == 1)
                  f4++;
            if (c[i][m - 1] != c[0][m - 1] && f2 == 1)
                  f2++;
            if (c[i][m - 1] != c[n - 1][m - 1] && f3 == 1)
                  f3++;
      }
      if (f1 >= 2 || f2 >= 2 || f3 >= 2 || f4 >= 2)
      {
            cout << "YES\n";
            return;
      }
      cout << "NO\n";
      return;
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}