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
      stack<int> st;
      while (n--)
      {
            int a;
            cin >> a;
            if (a == 1)
            {
                  int x;
                  cin >> x;
                  st.push(x);
            }
            if (a == 2)
            {
                  st.pop();
            }
            if (a == 3)
            {
                  cout << st.top() << '\n';
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