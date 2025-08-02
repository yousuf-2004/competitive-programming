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
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      int ans = 2;
      while (1)
      {
            set<int> st;
            for (int i = 0; i < (int)v.size(); i++)
            {
                  st.insert(v[i] % ans);
            }
            if ((int)st.size() == 2)
            {
                  break;
            }
            ans *= 2;
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