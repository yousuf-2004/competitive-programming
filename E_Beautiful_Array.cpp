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
      int a, b;
      cin >> a >> b;
      if (a == b)
      {
            cout << "1\n"
                 << a << '\n';
            return;
      }

      int k = 3 * a;
      cout << "3\n"
           << b << ' ' << b << ' ' << k - b - b;
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}