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
      string s;
      cin >> s;
      int dx = abs(x), dy = abs(y);
      int cnt = 0;
      for (int i = 0; i < n; i++)
      {
            if (s[i] == '8')
            {
                  cnt++;
            }
      }
      int mn = min({dx, dy, cnt});
      int lagbe = dx + dy - mn;
      if (lagbe <= n)
      {
            cout << "YES\n";
      }
      else
      {
            cout << "NO\n";
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