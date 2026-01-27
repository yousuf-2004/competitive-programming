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
      if (k > 1)
      {
            sort(a.rbegin(), a.rend());
            int ans = accumulate(a.begin(), a.begin() + k + 1, 0ll);
            cout << ans << '\n';
      }
      else
      {
            int l = *max_element(a.begin(), a.end() - 1);
            int r = *max_element(a.begin() + 1, a.end());
            int ans = max(l + a.back(), r + a[0]);
            cout << ans << '\n';
      }
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