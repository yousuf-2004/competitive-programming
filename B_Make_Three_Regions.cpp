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
      vector<string> v(2);
      for (int i = 0; i < 2; i++)
      {
            cin >> v[i];
      }
      int ans = 0;
      for (int i = 0; i < 2; i++)
      {
            for (int j = 0; j < n; j++)
            {
                  if (v[i][j] == '.')
                  {
                        int temp = 0;
                        if (j + 1 < n && v[i][j + 1] == '.')
                        {
                              temp++;
                        }
                        if (j - 1 < n && v[i][j - 1] == '.')
                        {
                              temp++;
                        }
                        if (temp < 2)
                        {
                              continue;
                        }
                        if (i == 0)
                        {
                              if (v[i + 1][j] == '.' && v[i + 1][j - 1] != '.' && v[i + 1][j + 1] != '.')
                              {
                                    ans++;
                              }
                        }
                        else
                        {
                              if (v[i - 1][j] == '.' && v[i - 1][j + 1] != '.' && v[i - 1][j - 1] != '.')
                              {
                                    ans++;
                              }
                        }
                  }
            }
      }
      cout << ans << endl;
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}