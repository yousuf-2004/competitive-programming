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
      vector<int> cnt(1e6 + 1, 0);
      int sum = 0;
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
            cnt[v[i]]++;
            sum += v[i];
      }

      vector<int> ans;
      for (int i = 0; i < n; i++)
      {
            int new_sum = sum - v[i];
            cnt[v[i]]--;
            if (new_sum % 2 == 0 and (new_sum / 2) <= 1e6 and cnt[new_sum / 2] > 0)
            {
                  ans.push_back(i + 1);
            }
            cnt[v[i]]++;
      }

      cout << ans.size() << '\n';
      for (auto a : ans)
      {
            cout << a << ' ';
      }
      cout << '\n';
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