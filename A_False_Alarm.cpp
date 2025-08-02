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
      int n, x;
      cin >> n >> x;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      int f = n, l = -1;
      for (int i = 0; i < n; i++)
      {
            if (a[i] == 1)
            {
                  f = min(f, i);
                  l = max(l, i);
            }
      }

      if (l == -1)
      {
            cout << "YES\n";
            return;
      }
      int k = l - f + 1;

      cout << (k <= x ? "YES\n" : "NO\n");
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