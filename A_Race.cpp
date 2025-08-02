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
      int a, x, y;
      cin >> a >> x >> y;

      int d_x = abs(a - x);
      int d_y = abs(a - y);

      if (d_x == 0 || d_y == 0)
      {
            cout << "NO\n";
            return;
      }

      double s1 = x - d_x, e1 = x + d_x;
      double s2 = y - d_y, e2 = y + d_y;

      double first = max(s1, s2);
      double last = min(e1, e2);

      int fs = floor(first) + 1;
      int ls = ceil(last) - 1;

      if (fs > ls)
      {
            cout << "NO\n";
      }
      else if (fs == ls && fs == a)
      {
            cout << "NO\n";
      }
      else
      {
            cout << "YES\n";
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int t;
      cin >> t;
      while (t--)
      {
            solve();
      }
      return 0;
}