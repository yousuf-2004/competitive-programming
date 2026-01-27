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

      int sum1 = 0, sum2 = 0, ans = 0;
      int i = 0, j = n - 1;
      while (i <= j)
      {
            if (sum1 > sum2)
            {
                  sum2 += v[j--];
            }
            else if (sum1 < sum2)
            {
                  sum1 += v[i++];
            }
            else
            {
                  ans = i + n - j - 1;
                  sum1 += v[i++];
            }
      }
      if (sum1 == sum2)
      {
            cout << n << '\n';
            return;
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