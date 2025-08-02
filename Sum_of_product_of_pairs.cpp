#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int mod = 1e9 + 7;

void solve()
{
      int n;
      cin >> n;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      vector<int> v(n);
      v[0] = a[0];

      for (int i = 1; i < n; i++)
      {
            v[i] = (v[i - 1] + a[i]) % mod;
      }

      int sum = 0;
      for (int i = 0; i < n - 1; i++)
      {
            int val = a[i] * ((v[n - 1] - v[i] + mod) % mod) % mod;
            sum = (sum + val) % mod;
      }
      cout << sum << '\n';
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
