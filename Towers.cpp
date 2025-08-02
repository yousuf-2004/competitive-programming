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
      multiset<int> tower_top;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            auto it = tower_top.upper_bound(x);
            if (it != tower_top.end())
            {
                  tower_top.erase(it);
                  tower_top.insert(x);
            }
            else
            {
                  tower_top.insert(x);
            }
      }
      cout << tower_top.size() << '\n';
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