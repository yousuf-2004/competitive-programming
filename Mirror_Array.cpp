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
      vector<vector<int>> v;
      for (int i = 0; i < n; i++)
      {
            vector<int> temp(m);
            for (int j = 0; j < m; j++)
            {
                  cin >> temp[j];
            }
            v.push_back(temp);
            reverse(v[i].begin(), v[i].end());
      }

      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  cout << v[i][j] << " ";
            }
            cout << endl;
      }
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}