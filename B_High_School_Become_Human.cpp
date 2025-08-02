#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9 + 7;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
void solve()
{
      int a, b;
      cin >> a >> b;
      double out1 = b * log(a);
      double out2 = a * log(b);
      if (out1 > out2)
      {
            cout << ">\n";
      }
      else if (out1 < out2)
      {
            cout << "<\n";
      }
      else
      {
            cout << "=\n";
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