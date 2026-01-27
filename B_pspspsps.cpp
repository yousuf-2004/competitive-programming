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
      if (s[0] == 's')
            s[0] = '.';
      if (s.back() == 'p')
            s.back() = '.';
      bool found_p = false;
      bool found_s = false;
      for (const auto c : s)
      {
            switch (c)
            {
            case 'p':
                  found_p = true;
                  break;
            case 's':
                  found_s = true;
                  break;
            }
      }
      cout << (found_p && found_s ? "NO" : "YES") << '\n';
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