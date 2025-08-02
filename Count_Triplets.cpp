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
      map<int, int> l, r;
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
            r[v[i]]++;
      }

      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            int s = v[i];
            r[s]--;
            if (s % k != 0)
            {
                  l[s]++;
                  continue;
            }
            int x = s / k;
            int t = 1ll * s * k;
            ans += 1ll * l[x] * r[t];
            l[s]++;
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