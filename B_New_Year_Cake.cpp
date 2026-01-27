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
      int a, b;
      cin >> a >> b;
      int ans = 0;
      for (int i = 0; i < 2; i++)
      {
            int w = a, d = b, k = 1;
            int layers = 0;
            while (true)
            {
                  bool ok = ((layers & 1) == 0) ^ i;
                  if (ok)
                  {
                        if (w < k)
                              break;
                        w -= k;
                  }
                  else
                  {
                        if (d < k)
                              break;
                        d -= k;
                  }
                  layers++;
                  k *= 2;
            }
            ans = max(ans, layers);
      }

      cout << ans << '\n';
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