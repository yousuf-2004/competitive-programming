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
      multiset<int> st;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            st.insert(x);
      }
      vector<pair<int, int>> a(m);
      for (int i = 0; i < m; i++)
      {
            cin >> a[i].first;
      }
      for (int i = 0; i < m; i++)
      {
            cin >> a[i].second;
      }
      sort(a.begin(), a.end());
      int ans = 0;
      // killing non-zero ones;
      for (int i = 0; i < m; i++)
      {
            if (a[i].second == 0)
            {
                  continue;
            }
            auto it = st.lower_bound(a[i].first);
            if (it == st.end())
            {
                  break;
            }
            int x = *it;
            st.erase(it);
            st.insert(max(x, a[i].second));
            ans++;
      }

      // killing zero ones;
      for (int i = 0; i < m; i++)
      {
            if (a[i].second)
            {
                  continue;
            }
            auto it = st.lower_bound(a[i].first);
            if (it == st.end())
            {
                  break;
            }
            st.erase(it);
            ans++;
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