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

      if (n == k)
      {
            vector<int> b(k / 2);
            for (int i = 1; i < n; i += 2)
            {
                  b[i / 2] = a[i];
            }
            for (int i = 0; i < n / 2; i++)
            {
                  if (b[i] != i + 1)
                  {
                        cout << i + 1 << '\n';
                        return;
                  }
            }
            cout << k / 2 + 1 << '\n';
      }
      else
      {
            if (count(a.begin() + 1, a.begin() + n - k + 2, 1) == n - k + 1)
            {
                  cout << 2 << '\n';
            }
            else
            {
                  cout << 1 << '\n';
            }
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