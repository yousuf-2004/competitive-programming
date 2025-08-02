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
      int a, b, c;
      cin >> a >> b >> c;
      int ans = 0;
      int a1 = a * b * c;
      int a2 = a + b + c;
      int a3 = a + b * c;
      int a4 = a * b + c;
      int a5 = a * (b + c);
      int a6 = (a + b) * c;
      ans = max({a1, a2, a3, a4, a5, a6});
      cout << ans << '\n';
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}