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
      string s;
      cin >> s;
      int n = s.size();
      vector<vector<int>> pref(n + 1, vector<int>(2, 0));
      for (int i = 0; i < n; i++)
      {
            pref[i + 1][0] = pref[i][0] + (s[i] == 'a');
            pref[i + 1][1] = pref[i][1] + (s[i] == 'b');
      }
      int cnta = 0, cntb = 0;
      for (char c : s)
      {
            if (c == 'a')
                  cnta++;
            else
                  cntb++;
      }
      if (cntb == 0)
      {
            cout << n << '\n';
            return;
      }
      if (cnta == 0)
      {
            cout << n << '\n';
            return;
      }
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            for (int j = i; j < n; j++)
            {
                  int left = pref[i][0];
                  int middle = pref[j + 1][1] - pref[i][1];
                  int right = pref[n][0] - pref[j + 1][0];
                  int total = left + middle + right;
                  ans = max(ans, total);
            }
      }

      cout << ans << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(nullptr);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}