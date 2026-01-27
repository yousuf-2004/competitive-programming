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
            if (i < n - 1 and s[i] == s[i + 1])
            {
                  s[i + 1] = '*';
            }
      }
      
      if (n > 1 and s.back() == s[n - 2])
      {
            s.back() = '*';
      }

      for (int i = 0; i < n; i++)
      {
            if (s[i] == '*')
            {
                  for (auto ch = 'a'; ch <= 'z'; ch++)
                  {
                        if ((i == 0 or ch != s[i - 1]) and
                            (i == n - 1 or ch != s[i + 1]))
                        {
                              s[i] = ch;
                              break;
                        }
                  }
            }
      }
      cout << s << '\n';
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