#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistent;

        Stay Hungry;
*/

void solve()
{
      int n, d;
      cin >> n >> d;
      vector<int> t(n), l(n);
      for (int i = 0; i < n; i++)
      {
            cin >> t[i] >> l[i];
      }
      for (int i = 1; i <= d; i++)
      {
            int mx = 0;
            for (int j = 0; j < n; j++)
            {
                  int ans = t[j] * (l[j] + i);
                  mx = max(mx, ans);
            }
            cout << mx << endl;
      }
      cout << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}
