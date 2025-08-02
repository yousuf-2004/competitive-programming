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
      int n, p;
      cin >> n >> p;
      vector<int> a(n), b(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> b[i];
      }
      vector<pair<int, int>> cost;
      cost.push_back({p, n + 1});
      for (int i = 0; i < n; i++)
      {
            cost.push_back({b[i], a[i]});
      }
      sort(cost.begin(), cost.end());
      int total = 1;
      int total_cost = p;
      int idx = 0;
      while (total < n)
      {
            int left = n - total;
            if (cost[idx].second <= left)
            {
                  total += cost[idx].second;
                  total_cost += cost[idx].second * cost[idx].first;
            }
            else
            {
                  total = n;
                  total_cost += left * cost[idx].first;
            }
            idx++;
      }
      cout << total_cost << '\n';
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