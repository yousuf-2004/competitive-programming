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
      // input
      int n, k;
      cin >> n >> k;
      vector<pair<pair<int, int>, int>> v(n);
      for (auto &[r, t] : v)
      {
            cin >> r.first >> r.second >> t;
      }

      // execution
      sort(v.begin(), v.end());
      int ans = k;
      for (auto &[r, t] : v)
      {
            int L = r.first, R = r.second;
            if (L <= ans and R >= ans)
            {
                  ans = max(ans, t);
            }
      }

      // output
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