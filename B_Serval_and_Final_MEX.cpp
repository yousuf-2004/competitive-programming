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
            cin >> a[i];

      vector<pair<int, int>> op;
      int mid = n / 2, r = n;

      bool found = false;
      for (int i = mid; i < n; i++)
      {
            if (a[i] == 0)
            {
                  found = true;
                  break;
            }
      }
      if (found)
      {
            op.push_back({mid + 1, n});
            r -= (n - mid - 1);
      }

      found = false;
      for (int i = 0; i < mid; i++)
      {
            if (a[i] == 0)
            {
                  found = true;
                  break;
            }
      }
      if (found)
      {
            op.push_back({1, mid});
            r -= (mid - 1);
      }

      op.push_back({1, r});

      cout << op.size() << "\n";
      for (auto [l, rr] : op)
      {
            cout << l << " " << rr << "\n";
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