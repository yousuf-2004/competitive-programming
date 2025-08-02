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
      vector<int> v;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            v.push_back(x);
      }
      vector<pair<int, int>> ans;
      for (int i = 0; i < n; i++)
      {
            if (v[i] % k == 0)
            {
                  ans.push_back({k, -i});
            }
            else
            {
                  ans.push_back({v[i] % k, -i});
            }
      }
      sort(ans.begin(), ans.end());
      for (int i = n - 1; i >= 0; i--)
      {
            cout << abs(ans[i].second) + 1 << ' ';
      }
      cout << '\n';
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