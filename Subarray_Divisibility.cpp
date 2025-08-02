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
      int a[n + 1], pref[n + 1];
      pref[0] = 0;
      for (int i = 1; i <= n; i++)
      {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
            pref[i] %= n;
            pref[i] = (pref[i] + n) % n;
      }
      map<int, int> mp;
      mp[0]++;
      int ans = 0;
      for (int i = 1; i <= n; i++)
      {
            ans += mp[pref[i]];
            mp[pref[i]]++;
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