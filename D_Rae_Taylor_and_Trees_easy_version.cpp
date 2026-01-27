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

      vector<int> p(n);
      for (int i = 0; i < n; ++i)
      {
            cin >> p[i];
      }

      set<int, greater<int>> st;
      for (auto &val : p)
      {
            auto it = st.upper_bound(val);

            if (it == st.end())
            {
                  st.insert(val);
                  continue;
            }

            while (it != --st.end())
            {
                  auto temp = it++;
                  st.erase(temp);
            }
      }

      if (st.size() == 1)
      {
            cout << "Yes\n";
      }
      else
      {
            cout << "No\n";
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
