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
      int x;
      cin >> x;
      vector<int> v(31, 0);
      for (int i = 0; i < 30; i++)
      {
            if (1 & (x >> i))
            {
                  if (v[i])
                  {
                        v[i + 1] = 1;
                        v[i] = 0;
                  }
                  else if (i > 0)
                  {
                        if (v[i - 1] == 1)
                        {
                              v[i + 1] = 1;
                              v[i - 1] = -1;
                        }
                        else
                        {
                              v[i] = 1;
                        }
                  }
                  else if (i == 0)
                  {
                        v[i] = 1;
                  }
            }
      }
      cout << 31 << '\n';
      for (int i = 0; i <= 30; i++)
      {
            cout << v[i] << ' ';
      }
      cout << '\n';
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}