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
      vector<int> a(n);
      for (int i = 0; i < n; i++)
            cin >> a[i];

      // Group indices by value
      unordered_map<int, vector<int>> groups;
      for (int i = 0; i < n; i++)
            groups[a[i]].push_back(i);

      // If any group too large -> impossible
      for (auto &g : groups)
      {
            if ((int)g.second.size() > n / 2)
            {
                  cout << -1 << "\n";
                  return;
            }
      }

      {
            // Collect groups
            vector<vector<int>> allGroups;
            for (auto &g : groups)
                  allGroups.push_back(g.second);

            // Rotate groups
            int m = allGroups.size();
            vector<int> b(n);
            for (int i = 0; i < m; i++)
            {
                  int next = (i + 1) % m;
                  for (int idx : allGroups[i])
                  {
                        b[idx] = a[allGroups[next][0]]; // assign from next group’s value
                  }
            }

            for (int x : b)
                  cout << x << " ";
            cout << "\n";
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