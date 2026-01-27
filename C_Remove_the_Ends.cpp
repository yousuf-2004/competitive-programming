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
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      vector<int> pref(n), suf(n);
      if (a[0] > 0)
      {
            pref[0] = a[0];
      }
      for (int i = 1; i < n; i++)
      {
            pref[i] = pref[i - 1];
            if (a[i] > 0)
            {
                  pref[i] += a[i];
            }
      }

      if (a[n - 1] < 0)
      {
            suf[n - 1] = -a[n - 1];
      }
      for (int i = n - 2; i >= 0; i--)
      {
            suf[i] = suf[i + 1];
            if (a[i] < 0)
            {
                  suf[i] -= a[i];
            }
      }

      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            // cout<<pref[i]<<' '<<suf[i]<<'\n';
            ans = max(ans, pref[i] + suf[i]);
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