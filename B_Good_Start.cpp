#include <bits/stdc++.h>
#define int int
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int w, h, a, b;
      cin >> w >> h >> a >> b;

      int x1, y1, x2, y2;
      cin >> x1 >> y1 >> x2 >> y2;

      if (x1 == x2)
      {
            if (abs(y1 - y2) % b == 0)
            {
                  cout << "YES\n";
            }
            else
            {
                  cout << "NO\n";
            }
      }
      else if (y1 == y2)
      {
            if (abs(x1 - x2) % a == 0)
            {
                  cout << "YES\n";
            }
            else
            {
                  cout << "NO\n";
            }
      }
      else
      {
            if (abs(x1 - x2) % a == 0)
            {
                  cout << "YES\n";
            }
            else if (abs(y1 - y2) % b == 0)
            {
                  cout << "YES\n";
            }
            else
            {
                  cout << "NO\n";
            }
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