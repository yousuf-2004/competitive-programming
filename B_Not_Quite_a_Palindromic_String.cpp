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
      int n, k;
      cin >> n >> k;
      string s;
      cin >> s;

      int c0 = 0, c1 = 0;
      for (char ch : s)
      {
            if (ch == '0')
                  c0++;
            else
            {
                  c1++;
            }
      }
      int up = (n - 2 * k) / 2;
      cout << (c0 >= up && c1 >= up && (c0 - up) % 2 == 0 && (c1 - up) % 2 == 0 ? "YES\n" : "NO\n");
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