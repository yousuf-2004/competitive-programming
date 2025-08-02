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
      int l, r;
      cin >> l >> r;
      if (l == r)
      {
            cout << 0 << '\n';
            return;
      }
      for (int i = 60; i >= 0; i--)
      {
            int l_bit = (l >> i) & 1;
            int r_bit = (r >> i) & 1;
            if (l_bit != r_bit)
            {
                  cout << (1ll << (i + 1)) - 1 << '\n';
                  return;
            }
      }
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