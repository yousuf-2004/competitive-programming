#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int n, a, b;
      cin >> n >> a >> b;
      int d = abs(a - b);
      if (d % 2 == 0)
      {
            cout << "YES" << endl;
      }
      else
      {
            cout << "NO" << endl;
      }
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}