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
      map<int, int> mp;
      for (int i = 0; i < n - 1; i++)
      {
            int u, v;
            cin >> u >> v;
            mp[u]++;
            mp[v]++;
      }
      int cnt = 0;
      for (int i = 1; i <= n; i++)
      {
            if (mp[i] == 1)
            {
                  cnt++;
            }
      }
      int ans = (cnt / 2) + (cnt % 2);
      cout << ans << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}