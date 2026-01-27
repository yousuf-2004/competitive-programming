#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1e5 + 10;
int n, t[N], dp[N];
void solve()
{
      cin >> n;
      for (int i = 0; i < n; i++)
      {
            cin >> t[i];
            int id1 = upper_bound(t, t + i, t[i] - 90) - t;
            int id2 = upper_bound(t, t + i, t[i] - 1440) - t;
            dp[i] = (i ? dp[i - 1] : 0) + 20;
            dp[i] = min(dp[i], (id1 ? dp[id1 - 1] : 0) + 50);
            dp[i] = min(dp[i], (id2 ? dp[id2 - 1] : 0) + 120);
            cout << (dp[i] - (i ? dp[i - 1] : 0)) << '\n';
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