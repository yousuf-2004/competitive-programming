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
      vector<int> a(n), b(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> b[i];
      }

      int total = 0;
      for (int i = 0; i < n; i++)
      {
            total += max(a[i], b[i]);
      }

      int ans = INT_MIN;
      for (int i = 0; i < n; i++)
      {
            int candidate = total - max(a[i], b[i]) + (a[i] + b[i]);
            ans = max(ans, candidate);
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