#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

void solve()
{
      int a, b, c;
      cin >> a >> b >> c;
      int new_a = b - (c - b);
      if (new_a >= a && new_a % a == 0 && new_a != 0)
      {
            cout << "YES\n";
            return;
      }

      int new_b = a + (c - a) / 2;
      if (new_b >= b && (c - a) % 2 == 0 && new_b % b == 0 && new_b != 0)
      {
            cout << "YES\n";
            return;
      }

      int new_c = a + 2 * (b - a);
      if (new_c >= c && new_c % c == 0 && new_c != 0)
      {
            cout << "YES\n";
            return;
      }

      cout << "NO\n";
      return;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}