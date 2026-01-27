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
      set<int> st;
      for (int i = 0; i < 4; i++)
      {
            int x;
            cin >> x;
            st.insert(x);
      }

      for (int i = 1; i <= 5; i++)
      {
            if (st.find(i) == st.end())
            {
                  cout << i << '\n';
                  return;
            }
      }
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