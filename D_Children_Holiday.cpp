#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1005, MAX = 1e7;
int m, n, t[N], z[N], y[N], ballon[N];
bool ok(int x)
{
      int total_ballon = 0;
      int ballon_left = m;
      for (int i = 1; i <= n; i++)
      {
            int block_time = t[i] * z[i] + y[i];
            int count_block = x / block_time;

            int current_ballon = count_block * z[i];
            int partia_ballon = x % block_time;
            current_ballon += min(z[i], partia_ballon / t[i]);
            total_ballon += current_ballon;

            ballon[i] = min(ballon_left, current_ballon);
            ballon_left -= ballon[i];
      }
      return x >= m;
}
void solve()
{
      cin >> m >> n;
      for (int i = 1; i <= n; i++)
      {
            cin >> t[i] >> z[i] >> y[i];
      }
      int l = 0, r = MAX, ans = 0;
      while (l <= r)
      {
            int mid = (l + r) / 2;
            if (ok(mid))
            {
                  ans = mid;
                  r = mid - 1;
            }
            else
            {
                  l = mid + 1;
            }
      }
      ok(ans);
      cout << ans << '\n';
      for (int i = 1; i <= n; i++)
      {
            cout << ballon[i] << ' ';
      }
      cout << '\n';
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