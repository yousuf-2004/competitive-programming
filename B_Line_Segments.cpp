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
      int n;
      cin >> n;
      int px, py, qx, qy;
      cin >> px >> py >> qx >> qy;
      int dist = (px - qx) * (px - qx) + (py - qy) * (py - qy);
      int s = 0;
      int mx = 0;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            s += x;
            mx = max(x, mx);
      }

      if (s * s < dist)
      {
            cout << "No\n";
            return;
      }

      int mn = max(2 * mx - s, 0ll);
      if (mn * mn > dist)
      {
            cout << "No\n";
            return;
      }
      cout << "Yes\n";
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