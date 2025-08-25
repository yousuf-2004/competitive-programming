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
      vector<int> a(n), b(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> b[i];
      }

      vector<int> diff(n);
      int maxdiff = INT_MIN;
      for (int i = 0; i < n; i++)
      {
            diff[i] = a[i] - b[i];
            maxdiff = max(maxdiff, diff[i]);
      }

      vector<int> ans;
      for (int i = 0; i < n; i++)
      {
            if (diff[i] == maxdiff)
            {
                  ans.push_back(i + 1);
            }
      }

      cout << ans.size() << '\n';
      for (int i = 0; i < ans.size(); i++)
      {
            cout << ans[i] << ' ';
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