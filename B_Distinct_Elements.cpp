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
      vector<int> v(n + 1);
      for (int i = 1; i <= n; i++)
      {
            cin >> v[i];
      }

      vector<int> ans;
      for (int i = 0; i < n; i++)
      {
            int diff = v[i + 1] - v[i];
            if (i - diff >= 0)
            {
                  ans.push_back(ans[i - diff]);
            }
            else
            {
                  ans.push_back(i + 1);
            }
      }

      for (auto a : ans)
      {
            cout << a << ' ';
      }
      cout << '\n';
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