#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 20000000;
const int mod = 1e9;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int reduce(int x)
{
      while (x > 0 and x % 10 == 0)
      {
            x /= 10;
      }
      return x % mod;
      ;
}
void solve()
{
      int n, m;
      while (cin >> n >> m)
      {
            int ans = 1;
            for (int i = n; i >= (n - m + 1); i--)
            {
                  ans = ans * i;
                  ans = reduce(ans);
            }
            cout << ans % 10 << '\n';
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