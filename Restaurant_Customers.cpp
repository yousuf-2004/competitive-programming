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
      vector<pair<int, int>> v;
      while (n--)
      {
            int a, b;
            cin >> a >> b;
            v.push_back({a, 1});
            v.push_back({b, -1});
      }

      sort(v.begin(), v.end());
      int ans = 0, customer = 0;
      for (int i = 0; i < v.size(); i++)
      {
            customer += v[i].second;
            ans = max(ans, customer);
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