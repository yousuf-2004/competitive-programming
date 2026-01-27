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
      int n, m;
      cin >> n >> m;
      vector<int> a(m);
      for (int i = 0; i < m; i++)
      {
            cin >> a[i];
            a[i]--;
      }
      vector<int> cnt(n);
      for (int i = 0; i < m; i++)
      {
            cnt[a[i]]++;
      }
      auto check = [&](int t)
      {
            int fr = 0, need = 0;
            for (int i = 0; i < n; i++)
            {
                  if (t >= cnt[i])
                  {
                        fr += (t - cnt[i]) / 2;
                  }
                  else
                  {
                        need += cnt[i] - t;
                  }
            }
            return need <= fr;
      };
      int l = 0, r = 2 * m, ans = -1;
      while (l <= r)
      {
            int mid = (l + r) / 2;
            if (check(mid))
            {
                  ans = mid;
                  r = mid - 1;
            }
            else
            {
                  l = mid + 1;
            }
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