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
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      set<int> pre, total;
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            total.insert(a[i]);
            if (pre.count(a[i]))
            {
                  pre.erase(a[i]);
            }
            if (pre.size() == 0)
            {
                  ans++;
                  pre = total;
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