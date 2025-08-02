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
      int n, m;
      cin >> n >> m;
      string s;
      cin >> s;
      vector<int> v(m);
      for (int i = 0; i < m; i++)
      {
            cin >> v[i];
      }

      set<int> st;
      for (auto a : v)
      {
            st.insert(a - 1);
      }
      string s1;
      cin >> s1;
      sort(s1.begin(), s1.end());
      int j = 0;
      for (auto a : st)
      {
            s[a] = s1[j++];
      }
      cout << s << "\n";
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}