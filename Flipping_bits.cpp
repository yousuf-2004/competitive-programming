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
      unsigned int n;
      cin >> n;
      unsigned int ans = 0;
      for (int i = 0; i < 32; i++)
      {
            if (!(n & (1u << i)))
            {
                  ans += 1u << i;
            }
      }
      cout << ans << '\n';
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}