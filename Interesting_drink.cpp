#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1e5 + 9;
int n, a[N], q;
void solve()
{
      cin >> n;
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      sort(a, a + n);
      cin >> q;
      while (q--)
      {
            int x;
            cin >> x;
            cout << upper_bound(a, a + n, x) - a << endl;
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