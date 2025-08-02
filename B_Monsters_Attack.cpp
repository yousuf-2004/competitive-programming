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
      vector<int> a(n);
      vector<int> b(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> b[i];
      }
      vector<int> ans(n + 1);
      for (int i = 0; i < n; i++)
      {
            ans[abs(b[i])] += a[i];
      }
      bool ok = true;
      int left = 0;
      for (int i = 1; i <= n; i++)
      {
            left += k - ans[i];
            ok &= (left >= 0);
      }
      cout << (ok ? "YES" : "NO") << endl;
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}