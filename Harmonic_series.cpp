#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
double harmonic(int n)
{
      double ans = 0;
      for (int i = 1; i <= n; i++)
      {
            ans += 1 / (double)i;
      }
      return ans;
}
void solve()
{
      int n;
      cin >> n;
      cout << setprecision(5) << harmonic(n) << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}