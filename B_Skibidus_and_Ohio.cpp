#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

void solve()
{
      string s;
      cin >> s;

      bool flag = false;
      for (int i = 0; i < s.size() - 1; i++)
      {
            if (s[i] == s[i + 1])
            {
                  flag = true;
                  break;
            }
      }
      cout << (flag ? 1 : (int)s.size()) << "\n";
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}
