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
      vector<string> a(n), b(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> b[i];
      }

      map<string, int> mp_a, mp_b;
      for (int i = 0; i < n; i++)
      {
            mp_a[a[i]]++;
      }
      for (int i = 0; i < n; i++)
      {
            mp_b[b[i]]++;
      }

      int ans = n;
      for (auto a : mp_a)
      {
            ans -= min(a.second, mp_b[a.first]);
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