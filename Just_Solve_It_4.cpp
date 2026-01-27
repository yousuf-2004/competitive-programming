#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int multi(int k, int n)
{
      return n / k;
}
int ok(int k, int l, int r)
{
      return multi(k, r) - multi(k, l - 1);
}
void solve()
{
      int n, m, l, r;
      cin >> n >> m >> l >> r;
      int g = __gcd(n, m);
      if ((double)(n / g) > (double)(r / m))
      {
            cout << "0\n";
            return;
      }
      int lc = n * m / g;
      cout << ok(lc, l, r) << '\n';
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