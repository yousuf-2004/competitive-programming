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
      switch (n % 3)
      {
      case 0:
            cout << a << endl;
            break;
      case 1:
            cout << b << endl;
            break;
      default:
            cout << (a ^ b) << endl;
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