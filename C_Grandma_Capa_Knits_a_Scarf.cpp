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

      int ans = n + 1;

      for (char i = 'a'; i <= 'z'; i++)
      {
            int l = 0, r = n - 1, cnt = 0;
            while (l <= r)
            {
                  if (s[l] == s[r])
                  {
                        l++;
                        r--;
                  }
                  else if (s[l] == i)
                  {
                        cnt++;
                        l++;
                  }
                  else if (s[r] == i)
                  {
                        cnt++;
                        r--;
                  }
                  else
                  {
                        cnt = n + 1;
                        break;
                  }
            }
            ans = min(cnt, ans);
      }

      (ans == n + 1) ? cout << -1 << '\n' : cout << ans << '\n';
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