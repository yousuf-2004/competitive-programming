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
      int n, u;
      cin >> n >> u;
      vector<int> a(n, 0);
      while (u--)
      {
            int l, r, val;
            cin >> l >> r >> val;
            a[l] += val;
            a[r + 1] -= val;
      }
      for (int i = 1; i <= n; i++)
      {
            a[i] += a[i - 1];
      }
      int q;
      cin >> q;
      while (q--)
      {
            int index;
            cin >> index;
            cout << a[index] << '\n';
      }
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