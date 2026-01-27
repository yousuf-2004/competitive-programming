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
      vector<int> v(n + 1);
      for (int i = 1; i <= n; i++)
      {
            cin >> v[i];
      }

      if (n == 2)
      {
            cout << min(v[1], v[2]) << '\n';
            return;
      }

      int ans = min(v[1], v[2]);
      for (int i = 1; i <= n - 2; i++)
      {
            vector<int> temp;
            for (int k = 0; k <= 2; k++)
            {
                  temp.push_back(v[i + k]);
            }
            sort(temp.begin(), temp.end());
            ans = max(ans, temp[1]);
      }
      cout << ans << '\n';
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