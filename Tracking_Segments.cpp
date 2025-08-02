#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 2e5 + 9;
int n, m, q, l[N], r[N], x[N];
bool ok(int k)
{
      int a[n + 1] = {};
      for (int i = 1; i <= k; i++)
      {
            a[x[i]] = 1;
      }
      for (int i = 1; i <= n; i++)
      {
            a[i] += a[i - 1];
      }
      for (int i = 1; i <= m; i++)
      {
            int cnt = a[r[i]] - a[l[i] - 1];
            int len = r[i] - l[i] + 1;
            if (len / 2 + 1 <= cnt)
            {
                  return true;
            }
      }
      return false;
}
void solve()
{
      cin >> n >> m;
      for (int i = 1; i <= m; i++)
      {
            cin >> l[i] >> r[i];
      }
      cin >> q;
      for (int i = 1; i <= q; i++)
      {
            cin >> x[i];
      }
      int l = 1, r = q, ans = -1;
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