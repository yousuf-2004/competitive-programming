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
      string type;
      cin >> n >> type;
      if (type == "FIFO")
      {
            queue<int> q;
            while (n--)
            {
                  string s;
                  cin >> s;
                  if (s == "IN")
                  {
                        int x;
                        cin >> x;
                        q.push(x);
                  }
                  else
                  {
                        if (q.empty())
                        {
                              cout << "None" << endl;
                        }
                        else
                        {
                              cout << q.front() << endl;
                              q.pop();
                        }
                  }
            }
      }
      else
      {
            stack<int> st;
            while (n--)
            {
                  string s;
                  cin >> s;
                  if (s == "IN")
                  {
                        int x;
                        cin >> x;
                        st.push(x);
                  }
                  else
                  {
                        if (st.empty())
                        {
                              cout << "None" << endl;
                        }
                        else
                        {
                              cout << st.top() << endl;
                              st.pop();
                        }
                  }
            }
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