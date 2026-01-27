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

      int cnt = 0;
      int temp = b;
      while ((temp % 2) == 0)
      {
            temp /= 2;
            cnt++;
      }

      if (cnt == 0 && (a % 2 == 0))
      {
            cout << -1 << '\n';
            return;
      }
      if (cnt == 1 && (a % 2 == 1))
      {
            cout << -1 << '\n';
            return;
      }

      __int128 ans = 0;
      if (cnt == 0)
      {
            ans = (__int128)a * (__int128)b + 1;
      }
      else
      {
            ans = (__int128)a * (__int128)(b / 2) + 2;
      }

      int out = (int)ans;
      cout << out << '\n';
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