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
      vector<int> v(26);
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            if (!v[s[i] - 'a'])
            {
                  v[s[i] - 'a'] = 1;
                  ans += (n - i);
            }
      }
      cout << ans << '\n';
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}