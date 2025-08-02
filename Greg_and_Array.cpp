#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1e5 + 9;
int a[N], d[N], l[N], r[N], x[N], op[N];
void solve()
{
      int n, m, k;
      cin >> n >> m >> k;
      for (int i = 1; i <= n; i++)
      {
            cin >> a[i];
      }
      for (int i = 1; i <= n; i++)
      {
            d[i] = a[i] - a[i - 1];
      }
      for (int i = 1; i <= m; i++)
      {
            cin >> l[i] >> r[i] >> x[i];
      }
      while (k--)
      {
            int x, y;
            cin >> x >> y;
            op[x]++;
            op[y + 1]--;
      }
      for (int i = 1; i <= m; i++)
      {
            op[i] += op[i - 1];
      }
      for (int i = 1; i <= m; i++)
      {
            d[l[i]] += x[i] * op[i];
            d[r[i] + 1] -= x[i] * op[i];
      }
      for (int i = 1; i <= n; i++)
      {
            d[i] += d[i - 1];
            cout << d[i] << ' ';
      }
      cout << '\n';
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