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
      int n;
      cin >> n;
      int a[n + 2];
      for (int i = 1; i <= n; i++)
      {
            cin >> a[i];
      }

      int ans = 0;
      for (int i = 1; i <= n / 2; i++)
      {
            ans = __gcd(ans, abs(a[i] - a[n - i + 1]));
      }
      if (ans == 0)
      {
            cout << "-1\n";
      }
      else
      {
            cout << ans << '\n';
      }
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