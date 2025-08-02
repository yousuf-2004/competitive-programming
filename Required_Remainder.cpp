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
      int x, y, n;
      cin >> x >> y >> n;
      if (n - n % x + y <= n)
      {
            cout << n - n % x + y << endl;
      }
      else
      {
            cout << n - n % x - (x - y) << endl;
      }
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}