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
      int n, x, y;
      cin >> n >> x >> y;

      string num;
      cin >> num;

      x--, y--;
      if (x < 0 || y < 0 || x >= n || y >= n)
      {
            cout << "NO\n";
            return;
      }

      int a = num[x] - '0';
      int b = num[y] - '0';

      bool ok = false;
      if (a != 0 && b % a == 0)
            ok = true;
      if (b != 0 && a % b == 0)
            ok = true;

      cout << (ok ? "YES\n" : "NO\n");
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
