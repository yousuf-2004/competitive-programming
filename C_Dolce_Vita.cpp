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
      int n, x;
      cin >> n >> x;
      vector<int> v(n);

      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      sort(v.begin(), v.end());

      vector<int> pref(n, 0);
      for (int i = 0; i < n; i++)
      {
            if (i == 0)
            {
                  pref[i] = v[i];
            }
            else
            {
                  pref[i] = pref[i - 1] + v[i];
            }
      }

      int ans = 0;
      for (int i = n - 1; i >= 0; i--)
      {
            int diff = x - pref[i];
            if (diff >= 0 && (diff / (i + 1)) >= 0)
            {
                  ans += (diff / (i + 1)) + 1;
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