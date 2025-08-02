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
      string s;
      cin >> s;

      set<int> st;
      for (int i = 0; i < n; i++)
      {
            if (s[i] == '0')
            {
                  st.insert(i);
            }
      }

      int ans = 0;

      for (int i = n - 1; i >= 0; i--)
      {
            if (s[i] == '1')
            {
                  if (ans == -1 || !st.size())
                  {
                        ans = -1;
                  }
                  else
                  {
                        ans += i - *st.rbegin();
                        s[*st.rbegin()] = '1';
                        st.erase(--st.end());
                  }
            }
            else if (st.size() && *st.rbegin() == i)
            {
                  st.erase(i);
            }
            cout << ans << " ";
      }
      cout << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}