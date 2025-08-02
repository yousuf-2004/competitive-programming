#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
void equation(int n, int k)
{
      unsigned int ans = 0;

      for (int i = 0; i <= k; i += 2)
      {
            int mult = 1;
            for (int j = 0; j < i; j++)
            {
                  mult *= n;
            }
            ans += mult;
      }
      cout << ans - 1 << "\n";
}
void solve()
{
      int n, k;
      cin >> n >> k;
      equation(n, k);
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}