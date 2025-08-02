#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int w, h, n;
const int max_rac = 1e14;
bool rec(int x)
{
      int a = (x / w);
      int b = (x / h);
      if (b == 0)
            return false;
      return a >= (double)n / b;
}
void solve()
{
      cin >> w >> h >> n;
      int l = 1, r = max_rac, ans = 0;
      while (l <= r)
      {
            int mid = (l + r) / 2;
            if (rec(mid))
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