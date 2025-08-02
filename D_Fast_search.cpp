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
      sort(v.begin(), v.end());
      int k;
      cin >> k;
      while (k--)
      {
            int l, r;
            cin >> l >> r;

            auto itl = lower_bound(v.begin(), v.end(), l);
            auto itr = upper_bound(v.begin(), v.end(), r);

            cout << itr - itl << " ";
      }
      cout << "\n";
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}