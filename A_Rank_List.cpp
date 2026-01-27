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
      int n, k;
      cin >> n >> k;
      vector<pair<int, int>> vc(n);
      for (int i = 0; i < n; i++)
      {
            cin >> vc[i].first >> vc[i].second;
      }

      sort(vc.rbegin(), vc.rend());

      pair<int, int> pr = vc[k - 1];
      int ans = count(vc.begin(), vc.end(), pr);
      cout << ans << '\n';
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