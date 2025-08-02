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
      vector<int> a(n);
      int cnt_0 = 0;
      unordered_set<int> d_0;
      d_0.reserve(n);

      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
            if (a[i] == 0)
            {
                  cnt_0++;
            }
            else
            {
                  d_0.insert(a[i]);
            }
      }

      int d = d_0.size();
      int nz = n - cnt_0;
      int op_1 = d;
      int op_2 = cnt_0 + (nz > 0 ? 1 : 0);

      cout << max(op_1, op_2) << "\n";
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