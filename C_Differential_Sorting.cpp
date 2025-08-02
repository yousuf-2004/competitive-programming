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

      if (v[n - 1] < v[n - 2])
      {
            cout << -1 << '\n';
            return;
      }

      if (v[n - 1] < 0)
      {
            if (is_sorted(v.begin(), v.end()))
            {
                  cout << 0 << '\n';
            }
            else
            {
                  cout << -1 << '\n';
            }
      }
      else
      {
            cout << n - 2 << '\n';
            for (int i = 1; i <= n - 2; i++)
            {
                  cout << i << ' ' << n - 1 << ' ' << n << '\n';
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