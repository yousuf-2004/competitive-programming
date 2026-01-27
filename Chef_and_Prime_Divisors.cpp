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
      while (true)
      {
            int g = __gcd(a, b);
            if (g == 1)
            {
                  break;
            }
            b /= g;
      }
      if (b == 1)
      {
            cout << "Yes\n";
      }
      else
      {
            cout << "No\n";
      }
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