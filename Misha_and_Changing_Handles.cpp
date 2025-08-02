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
      int q;
      cin >> q;
      map<string, string> mp;
      while (q--)
      {
            string x, y;
            cin >> x >> y;
            if (mp.find(x) == mp.end())
            {
                  mp[y] = x;
            }
            else
            {
                  mp[y] = mp[x];
                  mp.erase(x);
            }
      }
      cout << mp.size() << '\n';
      for (auto [a, b] : mp)
      {
            cout << b << ' ' << a << '\n';
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