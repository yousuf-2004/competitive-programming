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
      int x;
      cin >> x;

      int a = x;
      int b = 0;
      for (int i = 32; i >= 0; i--)
      {
            if ((x & (1LL << i)) != 0)
                  continue;
            if (2 * x - a - b >= (2LL << i))
            {
                  a += (1LL << i);
                  b += (1LL << i);
            }
      }

      if (a + b == 2 * x && (a ^ b) == x)
      {
            cout << a << " " << b << "\n";
      }
      else
      {
            cout << -1 << "\n";
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