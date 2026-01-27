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
      int n, m, c;
      cin >> n >> m >> c;
      vector<int> a(n), b(m);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < m; i++)
      {
            cin >> b[i];
      }

      vector<int> diff(n + m);
      for (int i = 0; i < m; i++)
      {
            diff[i] += b[i];
            diff[n - m + 1 + i] = -b[i];
      }
      for (int i = 1; i < n; i++)
      {
            diff[i] += diff[i - 1];
      }
      for (int i = 0; i < n; i++)
      {
            cout << (a[i] + diff[i]) % c << ' ';
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