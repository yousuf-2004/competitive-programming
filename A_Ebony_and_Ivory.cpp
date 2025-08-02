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
      int a, b, c;
      cin >> a >> b >> c;
      if (c % a == 0 || c % b == 0)
      {
            cout << "Yes" << endl;
            return;
      }

      for (int i = 0; i <= 10000; i++)
      {
            for (int j = 0; j <= 10000; j++)
            {
                  if (a * i + b * j == c)
                  {
                        cout << "Yes" << endl;
                        return;
                  }
            }
      }
      cout << "No" << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}