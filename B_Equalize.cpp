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
      set<int> st;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            st.insert(x);
      }

      vector<int> rem;
      for (auto a : st)
      {
            rem.push_back(a + n);
      }
      sort(rem.rbegin(), rem.rend());

      int cnt = 0, ans = 0;

      for (auto a : st)
      {
            cnt++;
            while (rem.size() && rem.back() <= a)
            {
                  rem.pop_back();
                  cnt--;
            }
            ans = max(ans, cnt);
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