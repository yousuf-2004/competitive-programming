#include <bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 1e9 + 7;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int n;
      cin >> n;
      vector<int> a(n), b(n), cnt(30);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> b[i];
      }

      int cntx = 1;
      for (int i = 1; i < n; i++)
      {
            cntx = (1ll * cntx * i) % mod;
      }

      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < 20; j++)
            {
                  if ((a[i] >> j) & 1)
                  {
                        cnt[j]++;
                  }
            }
      }

      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < 20; j++)
            {
                  int contrib = (1ll * cntx * (1 << j)) % mod;
                  if ((b[i] >> j) & 1)
                  {
                        ans += (n - cnt[j]) * contrib % mod;
                  }
                  else
                  {
                        ans += cnt[j] * contrib % mod;
                  }
            }
      }

      cout << ans % mod << '\n';
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