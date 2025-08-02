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
      int a[n];
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      sort(a, a + n);
      int mid = a[n / 2];
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            ans += abs(a[i] - mid);
      }
      cout << ans << '\n';
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