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
      int a[n];
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      map<int, int> mp;
      int cnt = 0;
      int m = 0;
      for (int i = 0; i < n; i++)
      {
            m += a[i];
            if (m == x)
            {
                  cnt++;
            }
            if (mp.count(m - x))
            {
                  cnt += mp[m - x];
            }
            mp[m]++;
      }
      cout << cnt << '\n';
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