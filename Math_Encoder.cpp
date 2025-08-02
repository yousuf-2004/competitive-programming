#include <bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
const int N = 1e5 + 5;
int powerTwo[N];
void init()
{
      powerTwo[0] = 1;
      for (int i = 1; i <= N; i++)
      {
            powerTwo[i] = (powerTwo[i - 1] * 2) % mod;
      }
}
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int n;
      cin >> n;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            ans -= (powerTwo[n - i - 1] * v[i] * 1ll) % mod;
            ans += (((powerTwo[i] * v[i] * 1ll) % mod + mod) % mod);
      }

      cout << ans << '\n';
}
signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      init();
      int t = 1;
      cin >> t;

      for (int i = 1; i <= t; i++)
      {
            cout << "Case #" << i << ": ";
            solve();
      }

      return 0;
}