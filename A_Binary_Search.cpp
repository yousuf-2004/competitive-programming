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
            int l = 0, r = n - 1;
            bool ok = false;
            while (l <= r)
            {
                  int mid = (l + r) / 2;
                  if (a[mid] == x)
                  {
                        ok = true;
                        break;
                  }
                  if (a[mid] < x)
                  {
                        l = mid + 1;
                  }
                  else
                  {
                        r = mid - 1;
                  }
            }
            if (ok == true)
            {
                  cout << "YES\n";
            }
            else
            {
                  cout << "NO\n";
            }
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