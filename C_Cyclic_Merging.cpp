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

      vector<int> a;
      for (int i = 0; i < n - 1; i++)
      {
            a.push_back(max(v[i], v[i + 1]));
      }
      a.push_back(max(v[0], v[n - 1]));
      sort(a.begin(), a.end());
      int ans = accumulate(a.begin(), a.end() - 1, 0ll);
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