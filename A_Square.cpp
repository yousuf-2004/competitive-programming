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
      int a, b, c, d;
      cin >> a >> b >> c >> d;
      if (a == b && b == c && c == d)
            cout << "YES\n";
      else
            cout << "NO\n";
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