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
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      if (n == 1)
      {
            cout << 1 << endl;
            return;
      }
      int cnt = 0;
      for (int i = 0; i < n; i++)
      {
            for (int j = i; j < n; j++)
            {
                  bool found = true;
                  for (int k = i; k < j; k++)
                  {
                        if (v[k] > v[k + 1])
                        {
                              found = false;
                              break;
                        }
                  }
                  if (found)
                  {
                        cnt++;
                  }
            }
      }
      cout << cnt << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}