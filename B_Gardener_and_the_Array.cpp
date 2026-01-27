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
      map<int, int> mp;
      vector<vector<int>> v;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            vector<int> temp(x);
            for (int j = 0; j < x; j++)
            {
                  cin >> temp[j];
                  mp[temp[j]]++;
            }
            v.push_back(temp);
      }

      string ans = "No";
      for (int i = 0; i < n; i++)
      {
            int f = 1;
            for (auto a : v[i])
            {
                  if (mp[a] == 1)
                  {
                        f = 0;
                        break;
                  }
            }
            if (f == 1)
            {
                  ans = "Yes";
                  break;
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