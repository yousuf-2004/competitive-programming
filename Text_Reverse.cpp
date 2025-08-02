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
      getline(cin, s);
      stack<char> st;
      for (char c : s)
      {
            if (c == ' ')
            {
                  while (!st.empty())
                  {
                        cout << st.top();
                        st.pop();
                  }
                  cout << " ";
            }
            else
            {
                  st.push(c);
            }
      }
      while (!st.empty())
      {
            cout << st.top();
            st.pop();
      }
      cout << endl;
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      cin >> t;
      cin.ignore();
      while (t--)
            solve();
      return 0;
}