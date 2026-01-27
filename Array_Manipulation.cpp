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
      int n, q;
      cin >> n >> q;
      vector<int> v(n + 2, 0);
      while (q--)
      {
            int a, b, k;
            cin >> a >> b >> k;
            v[a - 1] += k;
            v[b] -= k;
      }
      for (int i = 1; i < n; i++)
      {
            v[i] += v[i - 1];
      }
      auto it = max_element(v.begin(), v.end());
      cout << *it << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}