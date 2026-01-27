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
      int h, m;
      cin >> h >> m;

      int l = (12 * h) % 360;
      int r = m % 360;
      if (l == r)
      {
            cout << "yes\n";
      }
      else
      {
            cout << "no\n";
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}