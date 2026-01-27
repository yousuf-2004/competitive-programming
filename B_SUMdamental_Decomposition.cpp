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
      int n, x;
      cin >> n >> x;
      if (n == 1)
      {
            if (x == 0)
            {
                  cout << -1 << '\n';
            }
            else
            {
                  cout << x << '\n';
            }
            return;
      }
      int bits = __builtin_popcountll(x);
      if (bits > n)
      {
            cout << x << '\n';
            return;
      }
      int ans = x + (n - bits);
      if ((n - bits) % 2)
      {
            if (x == 0 || x == 1)
            {
                  ans += 3;
            }
            else
            {
                  ans++;
            }
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