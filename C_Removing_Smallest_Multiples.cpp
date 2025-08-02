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
      s = "*" + s;
      vector<int> v(n + 1, 0);

      for (int i = 1; i <= n; i++)
      {
            if (s[i] == '1')
            {
                  v[i] = 2;
            }
      }

      int ans = 0;
      for (int i = 1; i <= n; i++)
      {
            for (int j = i; j <= n; j += i)
            {
                  if (v[j] == 0)
                  {
                        v[j] = 1;
                        ans += i;
                  }
                  else if (v[j] == 2)
                  {
                        break;
                  }
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