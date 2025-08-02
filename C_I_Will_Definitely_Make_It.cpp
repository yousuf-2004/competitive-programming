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
      int n, k;
      cin >> n >> k;
      vector<int> h(n);
      for (int i = 0; i < n; i++)
      {
            cin >> h[i];
      }
      int init = h[k - 1];
      set<int> st;
      for (auto a : h)
      {
            if (a >= init)
            {
                  st.insert(a);
            }
      }

      bool ok = true;
      int prev = init;
      for (auto &a : st)
      {
            if (a - prev > init)
            {
                  ok = false;
            }
            prev = a;
      }

      if (ok)
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