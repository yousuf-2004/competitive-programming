#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1e6 + 9;
int f(int n)
{
      int mult = 1;
      while (n > 0)
      {
            int mod = n % 10;
            if (mod != 0)
            {
                  mult *= mod;
            }
            n /= 10;
      }
      return mult;
}
int g(int n)
{
      if (n < 10)
            return n;
      return g(f(n));
}
int l, r, k, G[N];
vector<int> v[10];
void solve()
{
      for (int i = 1; i < N; i++)
      {
            G[i] = g(i);
            v[G[i]].push_back(i);
      }
      int q;
      cin >> q;
      while (q--)
      {
            cin >> l >> r >> k;
            int ans = upper_bound(v[k].begin(), v[k].end(), r) - lower_bound(v[k].begin(), v[k].end(), l);
            cout << ans << '\n';
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