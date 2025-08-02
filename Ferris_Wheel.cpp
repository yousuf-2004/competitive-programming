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
      int n, x;
      cin >> n >> x;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      sort(v.rbegin(), v.rend());
      int j = n - 1;
      int cnt = 0;

      for (int i = 0; i <= j; i++)
      {
            if ((v[i] + v[j]) <= x)
            {
                  j--;
                  cnt++;
            }
            else
            {
                  cnt++;
            }
      }
      cout << cnt << "\n";
}

signed main()
{
      /* int t;
      cin >> t;
      while (t--) */
      solve();
      return 0;
}