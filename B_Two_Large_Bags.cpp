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
      vector<int> v;
      set<int> st;
      map<int, int> mp;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            mp[x]++;
            st.insert(x);
            v.push_back(x);
      }
      while (!st.empty())
      {
            int mn = *st.begin();
            if (mp[mn] == 1)
            {
                  cout << "No\n";
                  return;
            }
            mp[mn + 1] += mp[mn] - 2;
            st.erase(mn);
            if (mp[mn + 1])
            {
                  st.insert(mn + 1);
            }
            mp[mn] = 0;
      }
      cout << "Yes\n";
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