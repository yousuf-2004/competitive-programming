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
      vector<int> v;
      for (auto a : s)
      {
            v.push_back(a - '0');
      }

      for (int i = 1; i < s.size(); i++)
      {
            int copy_i = i;
            while (copy_i >= 1 && v[copy_i] > 0 && v[copy_i] > v[copy_i - 1] + 1)
            {
                  int x = v[copy_i];
                  v[copy_i] = v[copy_i - 1];
                  v[copy_i - 1] = x - 1;
                  if (copy_i > 1)
                  {
                        copy_i--;
                  }
                  else
                  {
                        break;
                  }
            }
      }

      string ans = "";
      for (auto a : v)
      {
            ans += to_string(a);
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