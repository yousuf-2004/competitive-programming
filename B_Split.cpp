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
      vector<int> a(2 * n);
      for (int i = 0; i < 2 * n; i++)
      {
            cin >> a[i];
      }

      unordered_map<int, int> freq;
      for (auto au : a)
      {
            freq[au]++;
      }
      int ans = 0, cnt_odd = 0;
      for (auto a : freq)
      {
            if (a.second & 1)
            {
                  ans++;
                  cnt_odd++;
            }
      }

      int cnt = 0;
      for (auto [x, y] : freq)
      {
            if (y & 1 ^ 1)
            {
                  if (y & 2)
                  {
                        ans += 2;
                  }
                  else
                  {
                        cnt++;
                  }
            }
      }

      if (cnt_odd < 2)
      {
            cout << ans + 2 * (cnt - cnt % 2) << '\n';
      }
      else
      {
            cout << ans + 2 * cnt << '\n';
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