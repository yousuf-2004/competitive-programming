#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 2e5 + 9;
int n, k, a[N];
bool ok(int x)
{
      int sum = 0;
      int cnt = 1;
      for (int i = 0; i < n; i++)
      {
            if (a[i] > x)
            {
                  return false;
            }
            if (sum + a[i] <= x)
            {
                  sum += a[i];
            }
            else
            {
                  sum = a[i];
                  cnt++;
            }
      }
      return cnt <= k;
}
void solve()
{
      cin >> n >> k;
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      int l = 0, r = 9e18, ans = 0;
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