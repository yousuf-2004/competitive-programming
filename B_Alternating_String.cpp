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
      int cnt = 0;
      for (int i = 0; i < s.size() - 1; i++)
      {
            if (s[i] == s[i + 1])
            {
                  cnt++;
            }
      }
      if (cnt > 2)
      {
            cout << "NO\n";
      }
      else
      {
            cout << "YES\n";
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