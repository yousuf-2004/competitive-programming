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
      int n, k, r, c;
      cin >> n >> k >> r >> c;
      r--, c--;
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < n; j++)
            {
                  if ((i + j) % k == (r + c) % k)
                  {
                        cout << 'X';
                  }
                  else
                  {
                        cout << '.';
                  }
            }
            cout << endl;
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