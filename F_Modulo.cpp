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

      sort(v.begin(), v.end());
      reverse(v.begin(), v.end());

      int x;
      cin >> x;

      int mn = v[n - 1], ans = 0;
      for (int m = 0; m < (1 << n); m++)
      {
            int temp = x;
            for (int i = 0; i < n; i++)
            {
                  if ((1 << i) & m)
                  {
                        temp = temp % v[i];
                  }
            }
            temp %= mn;
            ans = max(temp, ans);
      }
      cout << ans << '\n';
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