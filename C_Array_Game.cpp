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
      int n, k;
      cin >> n >> k;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      if (k >= 3)
      {
            cout << "0\n";
            return;
      }

      sort(a.begin(), a.end());
      int diff = a[0];
      for (int i = 1; i < n; i++)
      {
            diff = min(diff, a[i] - a[i - 1]);
      }
      if (k == 1)
      {
            cout << diff << '\n';
            return;
      }

      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < i; j++)
            {
                  int x = a[i] - a[j];
                  int pt = lower_bound(a.begin(), a.end(), x) - a.begin();
                  if (pt < n)
                  {
                        diff = min(diff, a[pt] - x);
                  }
                  if (pt > 0)
                  {
                        diff = min(diff, x - a[pt - 1]);
                  }
            }
      }
      cout << diff << '\n';
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