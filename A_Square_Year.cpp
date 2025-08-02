#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      string s;
      cin >> s;
      int x = stoi(s);
      if (int(sqrt(x)) * int(sqrt(x)) == x)
      {
            cout << 0 << " " << int(sqrt(x)) << "\n";
      }
      else
      {
            cout << -1 << "\n";
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