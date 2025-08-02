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
      vector<int> cnt(30, 0);
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            int k = __lg(x);
            cnt[k]++;
      }
      int ans = 0;
      for (int k = 0; k < 30; k++)
      {
            ans += 1ll * cnt[k] * (cnt[k] - 1) / 2;
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