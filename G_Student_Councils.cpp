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
      int k;
      cin >> k;
      int n;
      cin >> n;
      int a[n];
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      int l = 0, r = 5e10, ans = 0;
      while (l <= r)
      {
            int mid = (l + r) / 2;
            int p = 0;
            for (int i = 0; i < n; i++)
            {
                  p += min(a[i], mid);
            }
            if (p >= mid * k)
            {
                  ans = mid;
                  l = mid + 1;
            }
            else
            {
                  r = mid - 1;
            }
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