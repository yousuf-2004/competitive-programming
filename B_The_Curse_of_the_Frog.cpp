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
      int n, x;
      cin >> n >> x;
      int mx = 0;
      for (int i = 0; i < n; i++)
      {
            int a, b, c;
            cin >> a >> b >> c;
            mx = max(mx, a * b - c);
            x -= a * b - a;
      }

      if (x <= 0)
      {
            cout << 0 << '\n';
      }
      else if (mx)
      {
            cout << (x + mx - 1) / mx << '\n';
      }
      else
      {
            cout << "-1\n";
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