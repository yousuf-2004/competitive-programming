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
      int cnt = 0;
      for (int i = 0; i < n; i++)
      {
            if (s[i] == '(')
                  cnt++;
            else if (s[i] == ')')
                  cnt--;
            else
            {
                  if (cnt > 0)
                  {
                        cnt--;
                        s[i] = ')';
                  }
                  else
                  {
                        cnt++;
                        s[i] = '(';
                  }
            }
      }
      set<int> st;
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            if (s[i] == '(')
            {
                  st.insert(i);
            }
            else
            {
                  int temp = *st.rbegin();
                  ans += (i - temp);
                  st.erase(temp);
            }
      }
      cout << ans << "\n";
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}