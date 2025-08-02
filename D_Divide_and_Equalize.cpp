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

      map<int, int> mp;
      for (int i = 0; i < n; i++)
      {
            for (int j = 2; j * j <= a[i]; j++)
            {
                  while (a[i] % j == 0)
                  {
                        mp[j]++;
                        a[i] /= j;
                  }
            }
            if (a[i] > 1)
            {
                  mp[a[i]]++;
            }
      }

      bool ok = true;
      for (auto a : mp)
      {
            if (a.second % n != 0)
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