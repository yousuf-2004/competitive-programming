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
      int n, m;
      cin >> n >> m;
      vector<int> a(n);
      vector<int> b(m);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < m; i++)
      {
            cin >> b[i];
      }
      int cnt = 0;
      for (int i = 0; i < m; i++)
      {
            bool found = false;
            while (cnt < n)
            {
                  if (a[cnt] == b[i])
                  {
                        found = true;
                        cnt++;
                        break;
                  }
                  else
                  {
                        cnt++;
                  }
            }
            if (!found)
            {
                  cout << "NO" << endl;
                  return;
            }
      }
      cout << "YES" << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}