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
            cout << v[0] << endl;
            return;
      }
      int sum = v[0];
      int par = abs(v[0]) % 2;
      int mx = sum;
      for (int i = 1; i < n; i++)
      {
            if (abs(v[i]) % 2 != par)
            {
                  sum += v[i];
            }
            else
            {
                  sum = v[i];
            }
            if (v[i] > sum)
            {
                  sum = v[i];
            }
            par = abs(v[i]) % 2;
            mx = max(mx, sum);
      }
      cout << mx << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}