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
      if (s.find('0') == string::npos)
      {
            cout << 0 << "\n";
            return;
      }
      vector<int> v;
      for (int i = 0; i < n; i++)
      {
            if (s[i] == '1')
            {
                  v.push_back(i);
            }
      }
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            if (s[i] == '0')
            {
                  auto it = upper_bound(v.begin(), v.end(), i);
                  int one;
                  if (it == v.end())
                  {
                        one = v[0] + n;
                  }
                  else
                  {
                        one = *it;
                  }

                  int dist = one - i;
                  ans = max(ans, dist);
            }
      }

      cout << ans << "\n";
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