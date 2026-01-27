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
      if (n % 2 == 0)
      {
            cout << n / 2 << '\n';
            for (int i = 1; i <= n / 2; i++)
            {
                  cout << "2 ";
            }
      }
      else
      {
            cout << n / 2 << '\n';
            for (int i = 1; i < n / 2; i++)
            {
                  cout << "2 ";
            }
            cout << "3\n";
      }
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