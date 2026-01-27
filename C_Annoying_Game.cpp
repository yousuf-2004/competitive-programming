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
      vector<int> a(n), b(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> b[i];
      }

      vector<int> v(n);
      int s = 0, ans = LLONG_MIN;
      for (int i = 0; i < n; i++)
      {
            s = max(a[i], s + a[i]);
            v[i] = s;
            ans = max(ans, s);
      }

      if (k % 2 == 0)
      {
            cout << ans << '\n';
            return;
      }
      s = 0;
      for (int i = n - 1; i >= 0; i--)
      {
            s = max(a[i], s + a[i]);
            int x = v[i] + s - (a[i] - b[i]);
            ans = max(ans, x);
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