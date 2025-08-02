#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1e5 + 9;
int n, m, a[N], prefix[N];
void solve()
{
      cin >> n;
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
            if (i == 0)
            {
                  prefix[i] = a[i];
            }
            else
            {
                  prefix[i] = prefix[i - 1] + a[i];
            }
      }
      cin >> m;
      while (m--)
      {
            int x;
            cin >> x;
            int ans = lower_bound(prefix, prefix + n, x) - prefix;
            cout << ans + 1 << '\n';
      }
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