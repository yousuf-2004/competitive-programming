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
      cin >> s;
      int n = s.size();
      for (int i = 0; i < n; i++)
      {
            if (s[i] == '0')
            {
                  cout << s.substr(0, i) << s.substr(i + 1) << endl;
                  return;
            }
      }
      cout << s.substr(0, n - 1) << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}