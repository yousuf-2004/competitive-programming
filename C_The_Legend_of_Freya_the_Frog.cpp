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
      int x, y, k;
      cin >> x >> y >> k;
      int move_x = (x + k - 1) / k;
      int move_y = (y + k - 1) / k;

      cout << max(2 * move_x - 1, 2 * move_y) << endl;
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}