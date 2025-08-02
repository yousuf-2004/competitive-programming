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
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      int mx = *max_element(v.begin(), v.end());

      int ans = 0;
      int mux = 0;
      for (int i = 2; i <= mx; i++)
      {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                  if (v[j] % i == 0)
                  {
                        cnt++;
                  }
            }
            if (mux <= cnt)
            {
                  mux = cnt;
                  ans = i;
            }
      }

      cout << ans << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}