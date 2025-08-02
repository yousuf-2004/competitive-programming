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
      int a, b, x;
      cin >> a >> b >> x;

      if (x % 2 == 0)
      {
            if (a > b)
            {
                  for (int i = 0; i < x / 2; i++)
                  {
                        cout << "01";
                  }
                  cout << string(b - x / 2, '1');
                  cout << string(a - x / 2, '0');
            }
            else
            {
                  for (int i = 0; i < x / 2; i++)
                  {
                        cout << "10";
                  }
                  cout << string(a - x / 2, '0');
                  cout << string(b - x / 2, '1');
            }
      }
      else if (a > b)
      {
            for (int i = 0; i < x / 2; i++)
            {
                  cout << "01";
            }
            cout << string(a - x / 2, '0');
            cout << string(b - x / 2, '1');
      }
      else
      {
            for (int i = 0; i < x / 2; i++)
            {
                  cout << "10";
            }
            cout << string(b - x / 2, '1');
            cout << string(a - x / 2, '0');
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