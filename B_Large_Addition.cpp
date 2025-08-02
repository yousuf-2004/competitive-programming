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
      x = x - x % 10 + (x % 10 + 1) % 10;
      while (x > 9)
      {
            if (x % 10 == 0)
            {
                  cout << "NO" << endl;
                  return;
            }
            x /= 10;
      }
      if (x == 1)
      {
            cout << "YES" << endl;
      }
      else
      {
            cout << "NO" << endl;
      }
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}