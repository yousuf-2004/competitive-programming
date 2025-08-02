#include <bits/stdc++.h>
// #define int long long
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
      bool flag = false;
      for (int i = 1; i < n; i++)
      {
            if (v[i] == 0 || v[i - 1] - v[i] < 0)
            {
                  v[i] = v[i - 1] + v[i];
            }
            else
            {
                  flag = true;
                  break;
            }
      }
      if (flag)
      {
            cout << "-1" << endl;
      }
      else
      {
            for (int i = 0; i < n; i++)
            {
                  cout << v[i] << " ";
            }
            cout << endl;
      }
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}