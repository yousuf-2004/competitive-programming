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
      int i, x;
      string c;
      cin >> c;
      for (i = 0; i < c.size(); i++)
      {
            x = c[i] - '0';
            if (i == 0 && c[i] == '9')
            {
                  c[i] = c[i];
            }
            else if (x >= 5)
            {
                  c[i] = (9 - x) + '0';
                  ;
            }
            cout << c[i];
      }
}
signed main()
{
      /* int t;
      cin >> t;
      while (t--) */
      solve();
      return 0;
}