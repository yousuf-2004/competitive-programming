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
      int n, m;
      cin >> n >> m;
      map<string, int> mp;
      for (int i = 0; i < n; i++)
      {
            string s;
            int x;
            cin >> s >> x;
            mp[s] = x;
      }
      int ans = 0;
      for (int i = 0; i < m; i++)
      {
            ans = 0;
            string s;
            while (cin >> s)
            {
                  if (s == ".")
                        break;
                  ans += mp[s];
            }
            cout << ans << endl;
      }
}
signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}