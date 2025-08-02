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
      char c;
      cin >> c;
      string s;
      cin >> s;

      int cnt = count(s.begin(), s.end(), c);

      if (cnt == n)
      {
            cout << 0 << '\n';
            return;
      }
      for (int i = 0; i < n; i++)
      {
            bool ok = true;
            for (int j = i; j < n; j += (i + 1))
            {
                  if (s[j] != c)
                  {
                        ok = false;
                        break;
                  }
            }
            if (ok)
            {
                  cout << 1 << '\n';
                  cout << i + 1 << '\n';
                  return;
            }
      }
      cout << 2 << '\n';
      cout << n - 1 << ' ' << n << '\n';
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