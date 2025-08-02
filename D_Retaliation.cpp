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
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      if (2 * v[0] - v[1] < 0 || (2 * v[0] - v[1]) % (n + 1) != 0)
      {
            cout << "NO\n";
            return;
      }

      int x2 = (2 * v[0] - v[1]) / (n + 1);
      int x1 = v[0] - n * x2;

      if (x1 < 0)
      {
            cout << "NO\n";
            return;
      }

      bool ok = true;

      for (int i = 1; i <= n; i++)
      {
            if (v[i - 1] - i * x1 - (n - i + 1) * x2 != 0)
            {
                  ok = false;
            }
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