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
      int g, l;
      cin >> g >> l;
      if (l % g != 0)
      {
            cout << -1 << '\n';
            return;
      }
      cout << g << ' ' << l << '\n';
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}