#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

void solve()
{
      int x, y;
      cin >> x >> y;
      int cnt = 0;
      while (x <= y)
      {
            x *= 2;
            cnt++;
      }
      cout << cnt << "\n";
      return;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}