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
      vector<int> a(n);
      bool flag = false;
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < n; i++)
      {
            if (a[i] & 1)
            {
                  cout << 0 << endl;
                  return;
            }
      }
      int cnt = 0;
      while (!flag)
      {

            for (int i = 0; i < n; i++)
            {
                  if (a[i] & 1)
                  {
                        flag = true;
                        break;
                  }
                  a[i] /= 2;
            }
            if (!flag)
            {
                  cnt++;
            }
      }
      cout << cnt << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}