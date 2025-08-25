#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 998244353;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      string s;
      cin >> s;
      int n = s.size();
      int ans = 1;
      int anslen = 1;
      int cur = 1;

      for (int i = 1; i < n; i++)
      {
            if (s[i] != s[i - 1])
            {
                  anslen++;
                  ans = (ans * cur) % mod;
                  cur = 1;
            }
            else
            {
                  cur++;
            }
      }
      ans = (ans * cur) % mod;

      for (int i = 1; i <= n - anslen; i++)
      {
            ans = (ans * i) % mod;
      }
      cout << n - anslen << " " << ans << '\n';
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