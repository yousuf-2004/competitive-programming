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
      vector<pair<int, int>> a, b, c;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            a.push_back({x, i + 1});
      }
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            b.push_back({x, i + 1});
      }
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            c.push_back({x, i + 1});
      }
      sort(a.begin(), a.end());
      sort(b.begin(), b.end());
      sort(c.begin(), c.end());

      int ans = 0;
      for (int i = n - 1; i >= max(0LL, n - 3); i--)
      {
            for (int j = n - 1; j >= max(0LL, n - 3); j--)
            {
                  for (int k = n - 1; k >= max(0LL, n - 3); k--)
                  {
                        int idx1 = a[i].second;
                        int idx2 = b[j].second;
                        int idx3 = c[k].second;
                        if (idx1 != idx2 && idx1 != idx3 && idx2 != idx3)
                        {
                              int sum = a[i].first + b[j].first + c[k].first;
                              ans = max(ans, sum);
                        }
                  }
            }
      }
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