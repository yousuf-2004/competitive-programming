#include <bits/stdc++.h>
// #define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

void solve()
{
      int a, b;
      cin >> a >> b;
      if (a == b)
      {
            cout << 0 << endl;
            return;
      }
      cout << (abs(a - b) + 9) / 10 << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}