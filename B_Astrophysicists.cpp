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
      int n, k, g;
      cin >> n >> k >> g;
      int save = min((n - 1) * ((g - 1) / 2), k * g);
      int rem = k * g - save;
      int r = rem % g;
      if (2 * r >= g)
      {
            save -= (g - r);
      }
      else
      {
            save += r;
      }
      cout << save << "\n";
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}