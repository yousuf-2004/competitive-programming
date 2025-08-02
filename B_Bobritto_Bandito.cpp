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
      int n, m, l, r;
      cin >> n >> m >> l >> r;
      while (r - l != m)
      {
            if (l < 0)
            {
                  l++;
                  if ((r - l) == m)
                  {
                        break;
                  }
            }
            if (r > 0)
            {
                  r--;
                  if ((r - l) == m)
                  {
                        break;
                  }
            }
      }
      cout << l << " " << r << '\n';
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