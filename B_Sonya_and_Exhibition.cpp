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
      vector<int> l(m), r(m);
      for (int i = 0; i < m; i++)
      {
            cin >> l[i];
            cin >> r[i];
      }

      for (int i = 0; i < n; i++)
      {
            if (i % 2 == 0)
            {
                  cout << 0;
            }
            else
            {
                  cout << 1;
            }
      }
      cout << '\n';
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