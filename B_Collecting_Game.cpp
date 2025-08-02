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
      vector<pair<int, int>> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i].first;
            v[i].second = i;
      }
      sort(v.begin(), v.end());

      vector<int> pref(n, 0);
      pref[0] = v[0].first;
      for (int i = 1; i < n; i++)
      {
            pref[i] = pref[i - 1] + v[i].first;
      }

      vector<int> ans(n, 0);
      stack<int> dex;
      for (int i = 0; i < n; i++)
      {
            dex.push(v[i].second);
            if (i == n - 1 or v[i + 1].first > pref[i])
            {
                  while (!dex.empty())
                  {
                        ans[dex.top()] = i;
                        dex.pop();
                  }
            }
      }

      for (int i = 0; i < n; i++)
      {
            cout << ans[i] << " ";
      }
      cout << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}