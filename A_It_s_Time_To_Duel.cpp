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
      int sum = 0;
      for (int i = 0; i < n; ++i)
      {
            cin >> a[i];
            sum += a[i];
      }

      if (n == 1)
      {
            cout << (a[0] == 0 ? "NO" : "YES") << endl;
            return;
      }
      if (sum > n - 1)
      {
            cout << "YES" << endl;
            return;
      }

      for (int i = 0; i < n - 1; ++i)
      {
            if (a[i] == 0 && a[i + 1] == 0)
            {
                  cout << "YES" << endl;
                  return;
            }
      }

      for (int i = 0; i < n; ++i)
      {
            if (i == 0)
            {
                  if (a[i] == 0 && a[i + 1] != 1)
                  {
                        cout << "YES" << endl;
                        return;
                  }
            }
            else if (i == n - 1)
            {
                  if (a[i] == 0 && a[i - 1] != 1)
                  {
                        cout << "YES" << endl;
                        return;
                  }
            }
            else
            {
                  if (a[i] == 0 && (a[i - 1] != 1 || a[i + 1] != 1))
                  {
                        cout << "YES" << endl;
                        return;
                  }
            }
      }

      cout << "NO" << endl;
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