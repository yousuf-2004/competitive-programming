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
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      vector<int> a(n + 1);
      for (int i = 0; i < n; i++)
      {
            a[v[i]] = i;
      }

      int l = a[n], r = a[n];
      bool ok = true;
      for (int i = n - 1; i >= 1; i--)
      {
            l = min(l, a[i]);
            r = max(r, a[i]);
            int cnt = n - i + 1;
            if (r - l + 1 != cnt)
            {
                  ok = false;
                  break;
            }
      }

      if (ok)
      {
            cout << "YES\n";
      }
      else
      {
            cout << "NO\n";
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