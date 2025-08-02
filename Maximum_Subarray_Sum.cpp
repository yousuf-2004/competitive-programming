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
      int ans = INT_MIN;
      int sum = INT_MIN;
      for (int i = 0; i < n; i++)
      {
            sum = max(v[i], v[i] + sum);
            ans = max(ans, sum);
      }
      cout << ans << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}