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

      if (n <= 1000)
      {
            for (int i = 0; i < n; i++)
            {
                  for (int j = 0; j < i; j++)
                  {
                        if (a[i] % a[j] % 2 == 0)
                        {
                              cout << a[j] << ' ' << a[i] << '\n';
                              return;
                        }
                  }
            }
            cout << "-1\n";
            return;
      }

      set<int> se;
      for (int i = 0; i < n; i++)
      {
            if (a[i] & 1 ^ 1)
            {
                  se.insert(a[i]);
            }
      }
      if (se.size() >= 2)
      {
            cout << *se.begin() << ' ' << *next(se.end()) << '\n';
            return;
      }

      for (int i = 0; i < n - 1; i++)
      {
            if (a[i + 1] % a[i] & 1 ^ 1)
            {
                  cout << a[i] << ' ' << a[i + 1] << '\n';
                  return;
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