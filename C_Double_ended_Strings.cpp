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
      string a, b;
      cin >> a >> b;
      int n = a.size(), m = b.size(), i = 0, j = 0, cnt = 0;
      int lcs = 0;

      for (int len = 1; len <= min(n, m); len++)
      {
            for (int i = 0; i + len <= n; i++)
            {
                  for (int j = 0; j + len <= m; j++)
                  {
                        string A = a.substr(i, len);
                        string B = b.substr(j, len);
                        if (A == B)
                        {
                              lcs = max(lcs, len);
                        }
                  }
            }
      }
      cout << (n + m) - (2 * lcs) << '\n';
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