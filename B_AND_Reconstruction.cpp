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
      int n;
      cin >> n;
      vector<int> a(n - 1);
      for (int i = 0; i < n - 1; i++)
      {
            cin >> a[i];
      }
      vector<vector<int>> v(n, vector<int>(30, 0));
      for (int i = 29; i >= 0; i--)
      {
            if (a[0] & (1 << i))
            {
                  v[0][i] = 1;
                  v[1][i] = 1;
            }
      }
      for (int j = 1; j < n - 1; j++)
      {
            for (int i = 29; i >= 0; i--)
            {
                  if (a[j] & (1 << i))
                  {
                        if (v[j][i] == -1)
                        {
                              cout << -1 << endl;
                              return;
                        }
                        v[j][i] = 1;
                        v[j + 1][i] = 1;
                  }
            }
            for (int i = 29; i >= 0; i--)
            {
                  if (v[j][i] == 1 && v[j + 1][i] != 1)
                  {
                        v[j + 1][i] = -1;
                  }
            }
      }
      for (int i = 0; i < n; i++)
      {
            int ans = 0;
            for (int j = 29; j >= 0; j--)
            {
                  if (v[i][j] == 1)
                  {
                        ans |= (1 << j);
                  }
            }
            cout << ans << " ";
      }
      cout << endl;
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}