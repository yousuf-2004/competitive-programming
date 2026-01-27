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
      int a, b, n;
      cin >> a >> b >> n;
      if (a == b)
      {
            cout << 1 << '\n';
      }
      else
      {
            if (b * n <= a)
            {
                  cout << 1 << '\n';
            }
            else
            {
                  cout << 2 << '\n';
            }
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