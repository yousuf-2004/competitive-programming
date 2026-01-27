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
      int n, k, l, r;
      cin >> n >> k >> l >> r;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      } // n
      map<int, int> mp;
      set<pair<int, int>> st;
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            int x = a[i];
            if (mp.find(x) != mp.end())
            {
                  st.erase({mp[x], x}); // logn
            }
            mp[x] = i;             // logn
            st.insert({mp[x], x}); // logn
            if (st.size() > k + 1)
            {
                  st.erase(st.begin());
            }
            if (st.size() < k)
                  continue;

            int lo, hi;
            if (st.size() == k)
            {
                  lo = i - st.begin()->first + 1;
                  hi = i + 1;
            }
            else
            {
                  lo = i - next(st.begin())->first + 1;
                  hi = i - st.begin()->first;
            }
            lo = max(lo, l);
            hi = min(hi, r);
            if (lo <= hi)
                  ans += hi - lo + 1;
      } // n*logn
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