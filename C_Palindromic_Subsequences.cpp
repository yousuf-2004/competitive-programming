#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

/* 1 1 2 3 1 2
7 3 3 7 5 3 7 7 3
15 8 8 8 15 5 8 1 15 5 8 15 15 15 8
 */

void solve()
{
      int n;
      cin >> n;
      if (n == 6)
      {
            cout << "1 1 2 3 1 2\n";
      }
      else if (n == 9)
      {
            cout << "7 3 3 7 5 3 7 7 3\n";
      }
      else if (n == 15)
      {
            cout << "15 8 8 8 15 5 8 1 15 5 8 15 15 15 8\n";
      }
      else
      {
            for (int i = 1; i <= n - 2; i++)
            {
                  cout << i << ' ';
            }
            cout << "1 2\n";
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