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
      int a, b, c;
      cin >> a >> b >> c;
      vector<int> divs;
      for (int i = 1; i * i <= n; i++)
      {
            if (n % i == 0)
            {
                  divs.push_back(i);
                  if (i != n / i)
                  {
                        divs.push_back(n / i);
                  }
            }
      }
      int ans = 0;
      for (auto x : divs)
      {
            if (x <= a)
            {
                  for (auto y : divs)
                  {
                        if (y <= b)
                        {
                              if (n % (1ll * x * y) == 0)
                              {
                                    int z = n / (1ll * x * y);
                                    if (z <= c)
                                    {
                                          ans++;
                                    }
                              }
                        }
                  }
            }
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