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
      vector<int> k(n), c(m);
      for (int i = 0; i < n; i++)
      {
            cin >> k[i];
      }
      for (int i = 0; i < m; i++)
      {
            cin >> c[i];
      }

      sort(k.rbegin(), k.rend());
      int ans = 0, p = 0;
      for (int i = 0; i < n; i++)
      {
            if (p < m && c[p] <= c[k[i] - 1])
            {
                  ans += c[p];
                  p++;
            }
            else
            {
                  ans += c[k[i] - 1];
            }
      }

      cout << ans << '\n';
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