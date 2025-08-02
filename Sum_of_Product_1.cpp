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
      int n;
      cin >> n;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      int cnt = 0;
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            if (a[i] == 1)
            {
                  cnt++;
            }
            else
            {
                  cnt = 0;
            }
            ans += cnt;
      }
      cout << ans << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}