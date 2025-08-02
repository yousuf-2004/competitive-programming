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
      int cnt1 = 0, cnt2 = 0;
      for (int i = 0; i < n; ++i)
      {
            if (s[i] == '-')
            {
                  cnt1++;
            }
            else
            {
                  cnt2++;
            }
      }
      int ans = cnt2 * (cnt1 / 2) * ((cnt1 + 1) / 2);
      cout << ans << endl;
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