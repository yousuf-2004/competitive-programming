#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

void solve()
{
      int n, k;
      cin >> n >> k;
      string s = "";
      while (n > 0)
      {
            s += to_string(n % k);
            n /= k;
      }
      cout << s.size() << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}