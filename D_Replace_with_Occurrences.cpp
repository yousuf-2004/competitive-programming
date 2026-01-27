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
      vector<int> b(n);
      for (int i = 0; i < n; ++i)
            cin >> b[i];

      vector<vector<int>> pos(n + 1);
      for (int i = 0; i < n; ++i)
      {
            pos[b[i]].push_back(i);
      }

      vector<int> a(n, 0);
      int l = 1;
      bool ok = true;

      for (int s = 1; s <= n; s++)
      {
            int cnt = (int)pos[s].size();
            if (cnt == 0)
                  continue;
            if (cnt % s != 0)
            {
                  ok = false;
                  break;
            }

            for (int i = 0; i < cnt; i += s)
            {
                  for (int k = 0; k < s; k++)
                  {
                        a[pos[s][i + k]] = l;
                  }
                  l++;
            }
      }

      if (!ok)
      {
            cout << -1 << '\n';
      }
      else
      {
            for (int i = 0; i < n; ++i)
            {
                  if (i)
                        cout << ' ';
                  cout << a[i];
            }
            cout << '\n';
      }
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