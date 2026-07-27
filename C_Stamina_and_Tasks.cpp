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
      vector<double> c(n), p(n);
      for (int i = 0; i < n; i++)
      {
            int x, y;
            cin >> x >> y;
            c[i] = x;
            p[i] = y / 100.0;
      }
      double ans = 0;
      for (int i = n - 1; i >= 0; i--)
      {
            ans = max(ans, ans * (1 - p[i]) + c[i]);
      }
      cout << fixed << setprecision(10) << ans << '\n';
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