#include <bits/stdc++.h>
// #define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int case_num;
void solve()
{
      int n, q;
      cin >> n >> q;
      int a[n];
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      cout << "Case " << ++case_num << ':' << '\n';
      while (q--)
      {
            int b, c;
            cin >> b >> c;
            int ans = upper_bound(a, a + n, c) - lower_bound(a, a + n, b);
            cout << ans << '\n';
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      cin >> t;
      while (t--)
      {
            solve();
      }
      return 0;
}