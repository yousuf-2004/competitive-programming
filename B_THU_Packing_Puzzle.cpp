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
      int t, h, u;
      cin >> t >> h >> u;
      if (t > h * 2 + u)
      {
            cout << (t * 2 + h * 3 + u * 2 + 1) << '\n';
      }
      else
      {
            cout << t * 2 + h * 3 + u * 3 - min(t, u) << '\n';
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