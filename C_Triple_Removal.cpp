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
      vector<int> v(n);
      vector<vector<int>> pref(2, vector<int>{0});
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
            for (int j = 0; j < 2; j++)
            {
                  if (j == v[i])
                  {
                        pref[j].push_back(pref[j].back() + 1);
                  }
                  else
                  {
                        pref[j].push_back(pref[j].back());
                  }
            }
      }

      vector<int> same;
      for (int i = 1; i < n; i++)
      {
            if (v[i - 1] == v[i])
            {
                  same.push_back(i - 1);
            }
      }

      while (q--)
      {
            int l, r;
            cin >> l >> r;
            vector<int> cnt(2);
            for (int i = 0; i < 2; i++)
            {
                  cnt[i] = pref[i][r] - pref[i][l - 1];
            }

            if (cnt[0] % 3 != 0 || cnt[1] % 3 != 0)
            {
                  cout << "-1\n";
            }
            else
            {
                  int ans = 0;
                  for (int i = 0; i < 2; i++)
                  {
                        ans += cnt[i] / 3;
                  }

                  auto it = lower_bound(same.begin(), same.end(), l - 1);
                  if (it == same.end() || *it >= r - 1)
                  {
                        cout << ans + 1 << '\n';
                  }
                  else
                  {
                        cout << ans << '\n';
                  }
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