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
      int a1, a2, a3;
      cin >> a1 >> a2 >> a3;
      if (a1 == 0 && a2 == 0 && a3 == 0)
            return;
      if (a2 - a1 == a3 - a2)
            cout << "AP " << a3 + (a3 - a2) << endl;
      else
            cout << "GP " << a3 * (a3 / a2) << endl;

      solve();
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}