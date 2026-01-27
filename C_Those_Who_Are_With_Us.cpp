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
      vector<vector<int>> a(n, vector<int>(m));
      vector<int> r(n), c(m);

      int mx = INT_MIN, cnt_mx = 0;

      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  cin >> a[i][j];

                  if (a[i][j] > mx)
                  {
                        mx = a[i][j];
                        cnt_mx = 1;
                        fill(r.begin(), r.end(), 0);
                        fill(c.begin(), c.end(), 0);
                        r[i] = 1;
                        c[j] = 1;
                  }
                  else if (a[i][j] == mx)
                  {
                        cnt_mx++;
                        r[i]++;
                        c[j]++;
                  }
            }
      }

      int flag = 0;
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  if (r[i] + c[j] - (a[i][j] == mx) == cnt_mx)
                  {
                        flag = 1;
                        break;
                  }
            }
            if (flag)
            {
                  break;
            }
      }

      cout << mx - flag << '\n';
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