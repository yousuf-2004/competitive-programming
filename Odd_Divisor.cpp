#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

void solve()
{
      int n;
      cin >> n;
      if (n & (n - 1))
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