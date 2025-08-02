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
      int n, k;
      cin >> n >> k;
      int mx = -1, cnt = 0;
      for (int i = 0; i <= 30; i++)
      {
            if (k & (1 << i))
            {
                  mx = i;
                  cnt++;
            }
      }
      if (n == 1 || mx + 1 == cnt)
      {
            cout << k << " ";
            for (int i = 1; i < n; i++)
            {
                  cout << 0 << " ";
            }
            cout << endl;
      }
      else
      {
            int x = (1 << mx) - 1;
            int y = k - x;
            cout << x << " " << y << " ";
            for (int i = 1; i < n - 1; i++)
            {
                  cout << 0 << " ";
            }
            cout << endl;
      }
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}