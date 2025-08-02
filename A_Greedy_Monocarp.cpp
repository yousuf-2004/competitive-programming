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
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      sort(a.rbegin(), a.rend());

      int cnt = 0;
      int ans = 0;

      for (int i = 0; i < n; i++)
      {
            if (cnt + a[i] <= k)
            {
                  cnt += a[i];
            }
            else
            {
                  ans += k - cnt;
                  cnt = k;
                  break;
            }
      }
      if (cnt < k)
      {
            ans += k - cnt;
      }

      cout << ans << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}