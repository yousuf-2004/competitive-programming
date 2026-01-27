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
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      int r = 0, sum = 0, ans = 0;
      for (int l = 0; l < n; l++)
      {
            while (r < n and sum + v[r] <= k)
            {
                  sum += v[r];
                  r++;
            }
            ans = max(ans, r - l);
            sum -= v[l];
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