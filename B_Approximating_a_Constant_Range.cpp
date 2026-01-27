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
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      int l = 0;
      int pos = -1;
      int diff = 0;
      int ans = 1;
      for (int i = 1; i < n; i++)
      {
            int d = a[i] - a[i - 1];

            if (d != 0)
            {
                  if (d == diff)
                  {
                        l = pos + 1;
                  }
                  diff = d;
                  pos = i - 1;
            }

            ans = max(ans, i - l + 1);
      }

      cout << ans << endl;
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