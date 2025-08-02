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
      int n, k;
      cin >> n >> k;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      map<int, int> mp;
      int l = 0, ans = 0;
      for (int r = 0; r < n; r++)
      {
            mp[v[r]]++;
            while (l <= r and mp.size() > k)
            {
                  mp[v[l]]--;
                  if (mp[v[l]] == 0)
                  {
                        mp.erase(v[l]);
                  }
                  l++;
            }
            ans += r - l + 1;
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