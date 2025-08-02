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
      int n, k;
      cin >> n >> k;
      vector<int> v(n);
      int even = 0;
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      int d = INT_MAX;
      for (int i = 0; i < n; i++)
      {
            if (v[i] % 2 == 0)
            {
                  even++;
            }
            if (v[i] % k == 0)
            {
                  d = 0;
            }
            else
            {
                  d = min(d, k - (v[i] % k));
            }
      }
      if (k != 4)
      {
            cout << d << endl;
      }
      else
      {
            if (even >= 2)
            {
                  cout << 0 << endl;
            }
            else if (even == 1)
            {
                  cout << min(d, 1) << endl;
            }
            else
            {
                  cout << min(d, 2) << endl;
            }
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