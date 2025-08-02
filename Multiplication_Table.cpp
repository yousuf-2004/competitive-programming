#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
bool ok(int x)
{
      int cnt = 0;
      for (int i = 1; i <= n; i++)
      {
            cnt += min(n, x / i);
      }
      return cnt >= (n * n) / 2 + 1;
}
void solve()
{
      cin >> n;
      int l = 0, r = 1e12, ans = 0;
      while (l <= r)
      {
            int mid = l + (r - l) / 2;
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
      cout << ans;
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