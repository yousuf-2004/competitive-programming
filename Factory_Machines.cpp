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
      int n, t;
      cin >> n >> t;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      sort(v.begin(), v.end());
      int l = 0, r = v[0] * t, ans = 0;
      while (l <= r)
      {
            int mid = (l + r) / 2;
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                  sum += (mid / v[i]);
                  if (sum >= t)
                        break;
            }
            if (sum >= t)
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
      // cin >> t;
      while (t--)
            solve();
      return 0;
}