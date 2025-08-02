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

      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            x -= i;
            ans += mp[x];
            mp[x]++;
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