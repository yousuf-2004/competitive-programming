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
      for (int i = 0; i < 32; i += 2)
      {
            unsigned int a = (n >> i) & 1;
            unsigned int b = (n >> (i + 1)) & 1;
            swap(a, b);
            if (a)
            {
                  ans += 1u << i;
            }
            if (b)
            {
                  ans += 1u << (i + 1);
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