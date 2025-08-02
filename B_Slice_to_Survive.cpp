#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int ans(int x)
{
      int cnt = 0;
      while (x > 1)
      {
            x = (x + 1) / 2;
            cnt++;
      }
      return cnt;
}

void solve()
{
      int n, m, a, b;
      cin >> n >> m >> a >> b;
      if ((n - a + 1) < a)
      {
            a = n - a + 1;
      }
      if ((m - b + 1) < b)
      {
            b = m - b + 1;
      }
      cout << min(1 + ans(n) + ans(b), 1 + ans(m) + ans(a)) << '\n';
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