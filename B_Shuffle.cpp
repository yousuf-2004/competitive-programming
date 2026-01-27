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
      int n, x, m;
      cin >> n >> x >> m;

      int l = x, r = x;

      for (int i = 0; i < m; ++i)
      {
            int L, R;
            cin >> L >> R;

            if (max(l, L) <= min(r, R))
            {
                  l = min(l, L);
                  r = max(r, R);
            }
      }

      cout << (r - l + 1) << '\n';
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