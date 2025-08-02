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
      int q;
      cin >> q;
      int n = s.size();
      int cnt = 0;
      for (int i = 0; i < n - 3; i++)
      {
            if (s.substr(i, 4) == "1100")
            {
                  cnt++;
            }
      }
      while (q--)
      {
            int i, v;
            cin >> i >> v;
            i--;
            for (int j = i - 3; j <= i; j++)
            {
                  if (j < 0 || j + 3 >= n)
                  {
                        continue;
                  }
                  if (s.substr(j, 4) == "1100")
                  {
                        cnt--;
                  }
            }
            s[i] = '0' + v;
            for (int j = i - 3; j <= i; j++)
            {
                  if (j < 0 || j + 3 >= n)
                  {
                        continue;
                  }
                  if (s.substr(j, 4) == "1100")
                  {
                        cnt++;
                  }
            }
            if (cnt > 0)
            {
                  cout << "YES\n";
            }
            else
            {
                  cout << "NO\n";
            }
      }
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}