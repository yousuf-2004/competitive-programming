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
      int n, m, k;
      cin >> n >> m >> k;

      int l = 1, r = m;
      int ans = -1;
      while (l <= r)
      {
            int mid = (l + r) / 2;
            if ((m / (mid + 1) * mid + m % (mid + 1)) * n >= k)
            {
                  ans = mid;
                  r = mid - 1;
            }
            else
            {
                  l = mid + 1;
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