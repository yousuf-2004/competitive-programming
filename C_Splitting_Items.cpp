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
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      sort(a.rbegin(), a.rend());
      int ans = 0;
      for (int i = 0; i < n - 1; i += 2)
      {
            if (a[i] - a[i + 1] <= k)
            {
                  k -= a[i] - a[i + 1];
            }
            else
            {
                  ans += a[i] - a[i + 1] - k;
                  k = 0;
            }
      }
      if (n % 2)
      {
            ans += a[n - 1];
      }
      cout << ans << endl;
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}