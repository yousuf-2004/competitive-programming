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
      cout << 2 * n - 1 << '\n';
      for (int i = 1; i <= n; i++)
      {
            cout << i << ' ' << 1 << ' ' << i << '\n';
            if (i != n)
            {
                  cout << i << ' ' << i + 1 << ' ' << n << '\n';
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