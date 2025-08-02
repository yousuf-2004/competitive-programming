#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
      int n, k;
      cin >> n >> k;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      vector<int> x, y;
      multiset<int> st;
      for (int i = 0; i < n; i++)
      {
            st.insert(v[i]);
            if (i >= k - 1)
            {
                  x.push_back(*st.begin());
                  y.push_back(*st.rbegin());
                  st.erase(st.find(v[i - k + 1]));
            }
      }
      for (auto a : x)
      {
            cout << a << ' ';
      }
      cout << '\n';
      for (auto a : y)
      {
            cout << a << ' ';
      }
      cout << '\n';
}
signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      solve();
      return 0;
}
