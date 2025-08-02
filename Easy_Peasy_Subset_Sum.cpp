#include <bits/stdc++.h>
#define int long long
#define ll long long int
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

      sort(v.begin(), v.end());

      int ans = 0;
      if (n == 1)
      {
            cout << ans << '\n';
            return;
      }

      for (int i = 0; i < n; i++)
      {
            int x = ((1ll * v[i] * i - 1ll * v[i] * (n - i - 1)) % mod + mod) % mod;
            ans = (0ll + ans + x) % mod;
      }
      cout << (1ll * ans * powerTwo[n - 2]) % mod << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      init();
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}