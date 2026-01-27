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
      vector<int> q(n), r(n);
      for (int i = 0; i < n; i++)
      {
            cin >> q[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> r[i];
      }

      sort(q.begin(), q.end());

      multiset<int> st(r.begin(), r.end());
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            if (q[i] > k)
            {
                  continue;
            }
            int mx = (k - q[i]) / (q[i] + 1);
            auto it = st.upper_bound(mx);
            if (it == st.begin())
            {
                  continue;
            }
            it--;
            ans++;
            st.erase(it);
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