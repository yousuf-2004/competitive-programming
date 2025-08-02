#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

int min_divisor(int n)
{
      for (int d = 2; d <= sqrt(n); ++d)
      {
            if (n % d == 0)
            {
                  return d;
            }
      }
      return n;
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int l, r;
            cin >> l >> r;
            bool found = false;

            for (int x = l; x <= r; ++x)
            {
                  int md = min_divisor(x);
                  if (md != x)
                  {
                        cout << md << " " << x - md << endl;
                        found = true;
                        break;
                  }
            }

            if (!found)
            {
                  cout << -1 << endl;
            }
      }

      return 0;
}