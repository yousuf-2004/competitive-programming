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
      int n;
      cin >> n;
      if (n == 1)
      {
            cout << 1 << "\n";
      }
      else if (n == 2)
      {
            cout << "1 2\n";
      }
      else
      {
            cout << 1;
            for (int i = 3; i <= n; i++)
            {
                  cout << " " << i;
            }
            cout << " 2\n";
      }
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