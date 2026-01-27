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
      vector<int> p(n), b(n);
      for (int i = 0; i < n; i++)
      {
            cin >> p[i];
            p[i]--;
      }

      set<int> st;
      for (int i = 0; i < n; i++)
      {
            int d;
            cin >> d;
            d--;
            while (!st.count(d))
            {
                  st.insert(d);
                  d = p[d];
            }
            cout << st.size() << ' ';
      }
      cout << '\n';
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