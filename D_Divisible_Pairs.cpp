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
      int n, x, y;
      cin >> n >> x >> y;
      vector<int> v(n);
      map<int, vector<int>> mp;
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
            mp[v[i] % y].push_back(v[i]);
      }

      int ans = 0;
      for (auto it : mp)
      {
            vector<int> a = it.second;
            map<int, int> mp1;
            for (int i = 0; i < a.size(); i++)
            {
                  mp1[a[i] % x]++;
            }

            for (auto it : mp1)
            {
                  if (it.first == 0 || (it.first == x / 2 and x % 2 == 0))
                  {
                        int cnt = it.second;
                        ans += (cnt * (cnt - 1)) / 2;
                        it.second = 0;
                  }
                  else
                  {
                        int cnt1 = it.second;
                        int cnt2 = mp1[x - it.first];
                        ans += cnt1 * cnt2;
                        mp1[x - it.first] = 0;
                  }
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