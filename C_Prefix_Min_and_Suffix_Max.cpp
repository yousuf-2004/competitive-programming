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
      vector<int> a(n + 1);
      for (int i = 1; i <= n; i++)
      {
            cin >> a[i];
      }
      vector<int> l(n + 1, INT_MAX);
      for (int i = 1; i <= n; i++)
      {
            l[i] = min(l[i - 1], a[i]);
      }
      vector<int> r(n + 2, INT_MIN);
      for (int i = n; i >= 1; i--)
      {
            r[i] = max(r[i + 1], a[i]);
      }

      string ans;
      ans.reserve(n);
      for (int i = 1; i <= n; i++)
      {
            if (l[i] == a[i] || r[i] == a[i])
            {
                  ans.push_back('1');
            }
            else
            {
                  ans.push_back('0');
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