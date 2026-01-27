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
      int n, l, r;
      cin >> n >> l >> r;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      int L = 0, R = 0;
      int ans = 0;
      int cur = 0;
      while (L < n)
      {
            while (R < n && cur < l)
            {
                  cur += v[R];
                  R++;
            }
            if (cur >= l && cur <= r)
            {
                  ans++;
                  L = R;
                  cur = 0;
            }
            else
            {
                  cur -= v[L];
                  L++;
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