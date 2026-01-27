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
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      sort(a.rbegin(), a.rend());

      int MIN = min(n, m);
      vector<int> pref(MIN + 1, 0);
      for (int i = 1; i <= MIN; i++)
      {
            pref[i] = pref[i - 1] + a[i - 1];
      }

      int ans = 0;
      int cnt = 0;
      for (int i = 1; i <= MIN; i++)
      {
            cnt += a[i - 1] * (i - 1);
            int x = m * pref[i] - cnt;
            ans = max(ans, x);
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