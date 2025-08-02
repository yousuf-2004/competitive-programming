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
      int n, k, x;
      cin >> n >> k >> x;
      vector<int> v(n);

      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      sort(v.begin(), v.end());

      vector<int> diff;
      for (int i = 1; i < n; i++)
      {
            diff.push_back(v[i] - v[i - 1]);
      }
      // sort(diff.begin(), diff.end());

      vector<int> need;
      for (int i = 0; i < diff.size(); i++)
      {
            if (diff[i] > x)
            {
                  int ov = (diff[i] + x - 1) / x - 1;
                  need.push_back(ov);
            }
      }
      sort(need.begin(), need.end());

      int ans = need.size() + 1;
      for (auto a : need)
      {
            if (k >= a)
            {
                  k -= a;
                  ans--;
            }
      }
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