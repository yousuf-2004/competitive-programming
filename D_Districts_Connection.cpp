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
      int n;
      cin >> n;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      vector<pair<int, int>> ans;
      int cnt = -1;
      for (int i = 1; i < n; i++)
      {
            if (v[i] != v[0])
            {
                  cnt = i;
                  ans.push_back({1, i + 1});
            }
      }

      if (cnt == -1)
      {
            cout << "NO" << '\n';
            return;
      }

      for (int i = 1; i < n; i++)
      {
            if (v[i] == v[0])
            {
                  ans.push_back({cnt + 1, i + 1});
            }
      }

      cout << "YES" << '\n';
      for (auto [x, y] : ans)
      {
            cout << x << ' ' << y << '\n';
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