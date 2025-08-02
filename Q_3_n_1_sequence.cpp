#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
int ans(int n)
{
      if (n == 1)
            return 1;
      if (n % 2 == 0)
      {
            return 1 + ans(n / 2);
      }
      else
      {
            return 1 + ans((3 * n) + 1);
      }
}
void solve()
{
      int n;
      cin >> n;
      cout << ans(n) << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}