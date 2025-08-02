#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int n, k;
bool ok(int x)
{
      int num = x - (x / n);
      return num >= k;
}

void solve()
{
      cin >> n >> k;
      int l = 1, r = 2e9, ans = 0;
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
      cin >> t;
      while (t--)
            solve();
      return 0;
}