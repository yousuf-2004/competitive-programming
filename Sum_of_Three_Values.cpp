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
      vector<pair<int, int>> v;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            v.push_back({x, i + 1});
      }
      sort(v.begin(), v.end());
      for (int i = 0; i < n; i++)
      {
            int t = k - v[i].first;
            int l = i + 1, r = n - 1;
            while (l < r)
            {
                  int sum = v[l].first + v[r].first;
                  if (sum == t)
                  {
                        cout << v[i].second << ' ' << v[l].second << " " << v[r].second << '\n';
                        return;
                  }
                  if (sum < t)
                  {
                        l++;
                  }
                  else
                  {
                        r--;
                  }
            }
      }
      cout << "IMPOSSIBLE\n";
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