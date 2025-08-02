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
      vector<int> a(n), b(n + 1);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < n + 1; i++)
      {
            cin >> b[i];
      }
      int ans = 0;
      int mn = 10e18;
      for (int i = 0; i < n; i++)
      {
            ans += abs(a[i] - b[i]);
            mn = min(mn, abs(a[i] - b[n]));
            mn = min(mn, abs(b[i] - b[n]));
            if (min(a[i], b[i]) <= b[n] && b[n] <= max(a[i], b[i]))
            {
                  mn = 0;
            }
      }

      cout << ans + mn + 1 << "\n";
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}