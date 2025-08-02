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
      string s;
      cin >> s;
      stack<char> st;
      for (int i = 0; i < s.size(); i++)
      {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                  st.push(s[i]);
            }
            else
            {
                  if (st.empty())
                  {
                        cout << "NO\n";
                        return;
                  }
                  if (s[i] == ')' && st.top() == '(')
                  {
                        st.pop();
                  }
                  else if (s[i] == ']' && st.top() == '[')
                  {
                        st.pop();
                  }
                  else if (s[i] == '}' && st.top() == '{')
                  {
                        st.pop();
                  }
                  else
                  {
                        cout << "NO\n";
                        return;
                  }
            }
      }
      if (st.empty())
      {
            cout << "YES\n";
      }
      else
      {
            cout << "NO\n";
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