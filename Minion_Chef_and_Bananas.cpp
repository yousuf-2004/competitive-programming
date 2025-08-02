#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1e5 + 9;
int n, h, a[N], m;
bool ok(int x)
{
      int cnt = 0;
      for (int i = 0; i < n; i++)
      {
            cnt += (a[i] + x - 1) / x;
      }
      return cnt <= h;
}
void solve()
{
      cin >> n >> h;
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      sort(a, a + n);
      int l = 1, r = 1e9, ans = 0;
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