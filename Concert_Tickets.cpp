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
      int n, m;
      cin >> n >> m;
      multiset<int> h;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            h.insert(x);
      }
      for (int i = 0; i < m; i++)
      {
            int x;
            cin >> x;
            auto it = h.upper_bound(x);
            if (it == h.begin())
            {
                  cout << "-1\n";
                  continue;
            }
            else
            {
                  cout << *(--it) << "\n";
                  h.erase(it);
            }
      }
}

signed main()
{
      /* int t;
      cin >> t;
      while (t--) */
      solve();
      return 0;
}