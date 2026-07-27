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
      vector<int> v;
      int total_two = 0;
      for (int i = 0; i < n - 1; i++)
      {
            if (s[i] == 'v' and s[i] == s[i + 1])
            {
                  v.push_back(2);
                  total_two++;
            }
            if (s[i] == 'o')
            {
                  v.push_back(0);
            }
      }
      int cur_two = 0;
      int ans = 0;
      for (int i = 0; i < v.size(); i++)
      {
            if (v[i] == 2)
            {
                  cur_two++;
            }
            if (v[i] == 0)
            {
                  ans += (cur_two * (total_two - cur_two));
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