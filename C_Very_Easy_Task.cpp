#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int m = 2e9;
int n, x, y;
bool ok(int t)
{
      if (x > y)
      {
            swap(x, y);
      }
      int copies = 0;
      if (x <= t)
      {
            copies = 1;
            t -= x;
            copies += t / x;
            copies += t / y;
      }
      return copies >= n;
}
void solve()
{
      cin >> n >> x >> y;
      int l = 1, r = m, ans = 0;
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
      cout << ans << endl;
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