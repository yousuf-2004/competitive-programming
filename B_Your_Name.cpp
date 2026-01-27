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
      string s, t;
      cin >> n >> s >> t;
      vector<int> v(26, 0);
      for (char ch : s)
      {
            v[ch - 'a']++;
      }
      for (char ch : t)
      {
            v[ch - 'a']--;
      }

      bool ok = true;
      for (auto a : v)
      {
            if (a != 0)
            {
                  ok = false;
                  break;
            }
      }
      if (ok)
      {
            cout << "YES\n";
      }
      else
      {
            cout << "NO\n";
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