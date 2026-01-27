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
      vector<int> ans;
      int cur = 10;
      while (cur + 1 <= n)
      {
            if (n % (cur + 1) == 0)
            {
                  ans.push_back(n / (cur + 1));
            }
            cur *= 10;
      }

      sort(ans.begin(), ans.end());
      cout << ans.size() << '\n';
      for (auto a : ans)
      {
            cout << a << ' ';
      }
      if (ans.size())
      {
            cout << '\n';
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