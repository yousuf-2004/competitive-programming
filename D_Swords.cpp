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
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      int ma = *max_element(a.begin(), a.end());
      int sum = 0;
      for (int i = 0; i < n; i++)
      {
            sum += a[i];
      }
      int g = ma - a[0];
      for (int i = 1; i < n; i++)
      {
            g = gcd(g, ma - a[i]);
      }
      int ans = (ma * 1ll * n - sum) / g;
      cout << ans << ' ' << g << endl;
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