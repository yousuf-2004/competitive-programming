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
      int d = (b * b) - (4 * a * c);
      if (d < 0)
      {
            cout << "No roots\n";
            return;
      }
      if (d == 0)
      {
            cout << "One root: " << -b / (2 * a) << endl;
            return;
      }
      int x = (-1 * b + sqrt(d)) / (2 * a);
      int y = (-1 * b - sqrt(d)) / (2 * a);
      if (x > y)
            swap(x, y);
      cout << "Two roots: " << x << " " << y << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}