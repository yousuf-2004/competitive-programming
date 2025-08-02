#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1e5 + 9;
const int MAX = 1e14 + 9;
int n, k, a[N];
bool ok(int x)
{
      int cnt = 0;
      int segment = 1;
      for (int i = 0; i < n; i++)
      {
            if (cnt + a[i] <= x)
            {
                  cnt += a[i];
            }
            else
            {
                  if (a[i] > x)
                  {
                        return false;
                  }
                  cnt = a[i];
                  segment++;
            }
      }
      return segment <= k;
}
void solve()
{
      cin >> n >> k;
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      int l = 1, r = MAX, ans = 0;
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