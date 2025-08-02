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
      int n, k;
      cin >> n >> k;
      int cnt = 0;
      while (n--)
      {
            int x;
            cin >> x;
            if (x % k == 0)
            {
                  cnt++;
            }
      }
      cout << cnt << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}