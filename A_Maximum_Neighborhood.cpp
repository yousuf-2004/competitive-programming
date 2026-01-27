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
      int n;
      cin >> n;
      int ans;
      if (n == 1)
      {
            ans = 1;
      }
      else if (n == 2)
      {
            ans = 9;
      }
      else if (n == 3)
      {
            ans = 29;
      }
      else if (n == 4)
      {
            ans = 56;
      }
      else
      {
            ans = 5 * n * n - 5 * n - 5;
      }
      cout << ans << '\n';
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