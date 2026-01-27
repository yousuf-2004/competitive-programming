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
      int n;
      cin >> n;
      string a;
      cin >> a;
      int m;
      cin >> m;
      vector<char> b(m), c(m);
      for (int i = 0; i < m; i++)
      {
            cin >> b[i];
      }
      for (int i = 0; i < m; i++)
      {
            cin >> c[i];
      }

      reverse(b.begin(), b.end());
      for (int i = 0; i < m; i++)
      {
            char ch = b.back();
            b.pop_back();

            if (c[i] == 'V')
            {
                  a = ch + a;
            }
            else
            {
                  a = a + ch;
            }
      }

      cout << a << '\n';
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