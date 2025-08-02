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
      int n, k;
      cin >> n >> k;
      int prev = 0, ans = 0;
      for (int i = 0; i < n; ++i)
      {
            int a;
            cin >> a;
            ans = max(ans, a - prev);
            prev = a;
      }
      ans = max(ans, 2 * (k - prev));
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