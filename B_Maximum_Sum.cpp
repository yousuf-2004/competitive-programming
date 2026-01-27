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
      sort(v.begin(), v.end());
      vector<int> pref(n + 1, 0);
      for (int i = 0; i < n; i++)
      {
            pref[i + 1] = pref[i] + v[i];
      }

      int ans = 0;
      for (int i = 0; i <= k; i++)
      {
            ans = max(ans, pref[n - (k - i)] - pref[2 * i]);
      }
      cout << ans << '\n';
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}