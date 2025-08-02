#include <bits/stdc++.h>
// #define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      // input
      long long n, x, y;
      cin >> n >> x >> y;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      // execution
      long long sum = accumulate(v.begin(), v.end(), 0ll);
      x = sum - x;
      y = sum - y;
      long long ans = 0;
      sort(v.begin(), v.end());

      for (int i = 0; i < n; i++)
      {
            int l = lower_bound(v.begin(), v.end(), y - v[i]) - v.begin();
            int r = upper_bound(v.begin(), v.end(), x - v[i]) - v.begin();

            ans += max(0, r - l);

            if (l <= i && i < r)
            {
                  ans--;
            }
      }

      // output
      ans /= 2;
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