#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int n, q;
const int N = 2e5 + 9;
int v[N], d[N];
void solve()
{
      cin >> n >> q;
      for (int i = 1; i <= n; i++)
      {
            cin >> v[i];
      }
      sort(v + 1, v + n + 1);
      for (int i = 0; i < q; i++)
      {
            int l, r;
            cin >> l >> r;
            d[l]++;
            d[r + 1]--;
      }
      for (int i = 1; i <= n; i++)
      {
            d[i] += d[i - 1];
      }
      sort(d + 1, d + n + 1);
      int ans = 0;
      for (int i = 1; i <= n; i++)
      {
            ans += d[i] * v[i];
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