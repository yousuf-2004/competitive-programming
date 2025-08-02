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

      double sum = 0;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            sum += x;
      }

      cout << fixed << setprecision(6) << (4 * sum) / n << '\n';
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