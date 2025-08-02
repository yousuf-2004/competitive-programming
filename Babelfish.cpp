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
      string s;
      map<string, string> mp;
      while (getline(cin, s))
      {
            if (s == "")
            {
                  continue;
            }
            if (find(s.begin(), s.end(), ' ') != s.end())
            {
                  stringstream ss(s);
                  string x, y;
                  ss >> x >> y;
                  mp[y] = x;
            }
            else
            {
                  if (mp[s] == "")
                  {
                        cout << "eh\n";
                  }
                  else
                        cout << mp[s] << endl;
            }
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