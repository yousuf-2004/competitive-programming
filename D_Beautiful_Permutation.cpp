#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

int query(int t, int l, int r)
{
      cout << t << " " << l + 1 << " " << r << endl;
      int ans;
      cin >> ans;
      return ans;
}

void solve()
{
      int n;
      cin >> n;

      int len = query(2, 0, n) - query(1, 0, n);

      int lo = len, hi = n;
      while (lo < hi)
      {
            int x = (lo + hi) / 2;
            if (query(2, 0, x) - query(1, 0, x) == len)
            {
                  hi = x;
            }
            else
            {
                  lo = x + 1;
            }
      }

      cout << "! " << lo - len + 1 << " " << lo << endl;
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