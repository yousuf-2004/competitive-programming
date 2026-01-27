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

      vector<int> a(n), b(m);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      sort(a.begin(), a.end());
      for (int i = 0; i < m; i++)
      {
            cin >> b[i];
      }

      for (int i = 0; i < m; i++)
      {
            int res = 0;
            res += (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
            cout << res << ' ';
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