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

      vector<pair<int, int>> duplicate;
      for (int i = 0; i < n; i++)
      {
            duplicate.emplace_back(v[i], i + 1);
      }
      sort(duplicate.rbegin(), duplicate.rend());

      vector<pair<int, int>> chosen(duplicate.begin(), duplicate.begin() + k);

      int max_profit = 0;
      for (int i = 0; i < k; i++)
      {
            max_profit += chosen[i].first;
      }
      cout << max_profit << '\n';

      sort(chosen.begin(), chosen.end(),
           [](auto &a, auto &b)
           { return a.second < b.second; });

      int lst = 0;
      for (int i = 0; i < k - 1; i++)
      {
            cout << chosen[i].second - lst << " ";
            lst = chosen[i].second;
      }
      cout << n - lst << '\n';
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