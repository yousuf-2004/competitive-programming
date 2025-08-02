#include <bits/stdc++.h>
// #define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistent;

        Stay Hungry;
*/

void solve()
{
      int n, m;
      cin >> n >> m;

      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      vector<int> fq(m + 1, 0);
      for (int i = 0; i < n; i++)
      {
            fq[a[i]]++;
      }

      for (int i = 1; i <= m; i++)
      {
            cout << fq[i] << endl;
      }
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
      {
            solve();
      }
      return 0;
}
