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

      int ans = -1;
      for (int i = 2; i < n; i++)
      {
            if (min(a[i - 1], a[i - 2]) <= a[i] && a[i] <= max(a[i - 1], a[i - 2]))
                  ans = 1;
      }
      for (int i = 0; i < n - 2; i++)
      {
            if (min(a[i + 1], a[i + 2]) <= a[i] && a[i] <= max(a[i + 1], a[i + 2]))
                  ans = 1;
      }
      for (int i = 1; i < n; i++)
      {
            if (abs(a[i - 1] - a[i]) <= 1)
                  ans = 0;
      }

      cout << ans << "\n";
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