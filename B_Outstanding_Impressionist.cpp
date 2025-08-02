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
      int l[n], r[n];
      for (int i = 0; i < n; i++)
      {
            cin >> l[i] >> r[i];
      }
      vector<int> v(2 * n + 1, 0);

      for (int i = 0; i < n; i++)
      {
            if (l[i] == r[i])
            {
                  v[l[i]]++;
            }
      }

      int p[2 * n + 2];
      p[0] = 0;
      for (int i = 0; i < 2 * n + 1; i++)
      {
            p[i + 1] = p[i] + (v[i] > 0);
      }

      string ans;

      for (int i = 0; i < n; i++)
      {
            int cnt = p[r[i] + 1] - p[l[i]];
            if (l[i] == r[i] && v[l[i]] == 1)
            {
                  cnt--;
            }
            if (r[i] - l[i] + 1 > cnt)
            {
                  ans += '1';
            }
            else
            {
                  ans += '0';
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