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
      if (n == 0)
      {
            cout << 1 << endl;
            return;
      }
      int c[] = {8, 4, 2, 6};
      int pos = (n - 1) % 4;
      cout << c[pos] << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}