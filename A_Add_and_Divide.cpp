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
      int a, b;
      cin >> a >> b;
      int ans = INT_MAX;
      for (int add = 0; add <= 31; add++)
      {
            int op = add;
            int new_b = b + add;
            int copy_a = a;
            if (new_b == 1)
            {
                  continue;
            }
            while (copy_a > 0)
            {
                  copy_a /= new_b;
                  op++;
            }
            ans = min(ans, op);
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