#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for the better one. 
*/

void solve()
{
      int n, l, r, x;
      cin >> n >> l >> r >> x;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      int total = 1 << n; // 2^n combinations
      int cnt = 0;

      for (int bits = 0; bits < total; bits++)
      {
            int sum = 0;
            int mx = INT_MIN;
            int mn = INT_MAX;
            int count = 0;

            for (int i = 0; i < n; i++)
            {
                  if (bits & (1 << i))
                  {
                        sum += a[i];
                        mx = max(mx, a[i]);
                        mn = min(mn, a[i]);
                        count++;
                  }
            }

            if (count >= 2 && sum >= l && sum <= r && (mx - mn) >= x)
            {
                  cnt++;
            }
      }

      cout << cnt << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}