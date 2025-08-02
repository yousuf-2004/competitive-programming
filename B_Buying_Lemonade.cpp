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
      int ans = k;
      int track = 0;
      for (int i = 0; i < n; i++)
      {
            v[i] -= track;
            k -= min(k, (n - i) * v[i]);
            if (k == 0)
            {
                  break;
            }
            else
            {
                  ans++;
            }
            track += v[i];
      }
      cout << ans << "\n";
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}