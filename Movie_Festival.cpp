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
      vector<pair<int, int>> v;
      for (int i = 0; i < n; i++)
      {
            int l, r;
            cin >> l >> r;
            v.push_back({l, r});
      }
      sort(v.begin(), v.end(), [](pair<int, int> x, pair<int, int> y)
           { return x.second < y.second; });
      int max_end = -1, ans = 0;
      for (auto [start, end] : v)
      {
            if (start >= max_end)
            {
                  max_end = end;
                  ans++;
            }
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