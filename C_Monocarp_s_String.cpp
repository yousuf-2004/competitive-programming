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
      string s;
      cin >> s;
      int a = count(s.begin(), s.end(), 'a');
      int b = n - a;
      int extraA = a - b;
      if (extraA == 0)
      {
            cout << "0\n";
            return;
      }
      map<int, int> mp;
      mp[0] = 0;
      int ans = n;
      for (int i = 1, cur_a = 0, cur_b = 0; i <= n; i++)
      {
            if (s[i - 1] == 'a')
            {
                  cur_a++;
            }
            else
            {
                  cur_b++;
            }
            int cur_state = cur_a - cur_b;
            if (mp.count(cur_state - extraA))
            {
                  ans = min(ans, i - mp[cur_state - extraA]);
            }
            mp[cur_state] = i;
      }

      if (ans == n)
      {
            cout << "-1\n";
      }
      else
      {
            cout << ans << "\n";
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