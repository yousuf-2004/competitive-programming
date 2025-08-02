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
      int n, m, p, q;
      cin >> n >> m >> p >> q;
      if (n % p == 0)
      {
            if ((n / p) * q == m)
            {
                  cout << "YES\n";
            }
            else
            {
                  cout << "NO\n";
            }
      }
      else
      {
            cout << "YES\n";
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