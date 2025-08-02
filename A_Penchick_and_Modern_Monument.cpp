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
      vector<int> h(n);
      for (int i = 0; i < n; i++)
      {
            cin >> h[i];
      }
      int cnt = 1;
      int res = 0;

      for (int i = 0; i < n - 1; i++)
      {
            if (h[i] <= h[i + 1])
                  cnt++;
            else
            {
                  cnt = 1;
            }
            res = max(cnt, res);
      }
      res = max(cnt, res);

      cout << n - res << endl;
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}