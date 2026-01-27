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

      int first = a[0], last = a[n - 1];
      if (a[0] == -1 && a[n - 1] == -1)
      {
            first = 0;
            last = 0;
      }
      else if (first == -1)
      {
            first = last;
      }
      else if (last == -1)
      {
            last = first;
      }
      a[0] = first;
      a[n - 1] = last;

      for (int i = 1; i < n - 1; i++)
      {
            if (a[i] == -1)
            {
                  a[i] = 0;
            }
      }

      int ans = abs(a[n - 1] - a[0]);
      cout << ans << '\n';
      for (int i = 0; i < n; i++)
      {
            cout << a[i] << ' ';
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