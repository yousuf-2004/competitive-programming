#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
map<string, int> mp;
void solve()
{
      int type;
      string s;
      cin >> type >> s;
      if (type == 1)
      {
            int x;
            cin >> x;
            mp[s] += x;
      }
      else if (type == 2)
      {
            mp[s] = 0;
      }
      else
      {
            cout << mp[s] << '\n';
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