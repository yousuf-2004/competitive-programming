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
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      int bit[30]{};
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < 30; j++)
            {
                  if ((1 << j) & v[i])
                  {
                        bit[j]++;
                  }
            }
      }

      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            int sum = 0;
            for (int j = 0; j < 30; j++)
            {
                  if ((1 << j) & v[i])
                  {
                        sum += (1 << j) * (n - bit[j]);
                  }
                  else
                  {
                        sum += (1 << j) * bit[j];
                  }
            }
            ans = max(ans, sum);
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