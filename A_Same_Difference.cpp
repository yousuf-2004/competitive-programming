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
      string s;
      cin >> s;

      int ans = 0;
      for (int i = 0; i < n - 1; i++)
      {
            if (s[i] != s[n - 1])
            {
                  ans++;
            }
            else
            {
                  continue;
            }
      }

      cout << ans << '\n';
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