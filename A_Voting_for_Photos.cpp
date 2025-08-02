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
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      map<int, int> mp;
      for (int i = 0; i < n; i++)
      {
            mp[v[i]]++;
      }
      int ans = 0, mx = 0;
      for (auto a : mp)
      {
            if (a.second > mx)
            {
                  mx = a.second;
                  ans = a.first;
            }
      }
      cout << ans << '\n';
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