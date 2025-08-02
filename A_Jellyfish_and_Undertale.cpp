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
      int a, b, n;
      cin >> a >> b >> n;
      int ans = b;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            ans += min(a - 1, x);
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
