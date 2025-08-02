#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
      int n, k, p;
      cin >> n >> k >> p;
      if (k < -n * p || k > n * p)
      {
            cout << -1 << endl;
            return;
      }
      int ans = (abs(k) + p - 1) / p;

      cout << ans << endl;
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