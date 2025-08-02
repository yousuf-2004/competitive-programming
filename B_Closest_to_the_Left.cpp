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
      for (int i = 0; i < k; i++)
      {
            int x;
            cin >> x;
            int l = -1, r = n;
            bool ok = false;
            while (l + 1 < r)
            {
                  int mid = (l + r) / 2;
                  if (a[mid] <= x)
                  {
                        l = mid;
                  }
                  else
                  {
                        r = mid;
                  }
            }
            cout << l + 1 << endl;
      }
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}