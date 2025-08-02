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
      vector<int> pref(n + 1, 0);
      for (int i = 0; i < n; i++)
      {
            pref[i + 1] = pref[i] + v[i];
      }

      double ans = 0;
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < i + 1; j++)
            {
                  if (i - j + 1 >= k)
                  {
                        ans = max(ans, ((pref[i + 1]) - pref[j]) / double(i - j + 1));
                  }
            }
      }
      cout << setprecision(15) << fixed << ans << '\n';
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