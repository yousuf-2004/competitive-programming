#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int countVK(const string &s)
{
      int cnt = 0;
      for (int i = 0; i + 1 < s.size(); i++)
      {
            if (s[i] == 'V' && s[i + 1] == 'K')
                  cnt++;
      }
      return cnt;
}

void solve()
{
      string s;
      cin >> s;

      int n = s.size();
      int ans = countVK(s);

      for (int i = 0; i < n; i++)
      {
            string t = s;
            if (t[i] == 'V')
                  t[i] = 'K';
            else
                  t[i] = 'V';

            ans = max(ans, countVK(t));
      }

      cout << ans << "\n";
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