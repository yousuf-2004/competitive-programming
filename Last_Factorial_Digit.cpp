#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
int fac(int n)
{
      if (n <= 1)
      {
            return 1;
      }
      return n * fac(n - 1);
}
void solve()
{
      int n;
      cin >> n;
      int ans = fac(n);
      cout << ans % 10 << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}