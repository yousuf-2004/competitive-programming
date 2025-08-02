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
      vector<int> cnt(30, 0);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
            for (int j = 0; j < 30; j++)
            {
                  if (v[i] >> j & 1)
                  {
                        cnt[j]++;
                  }
            }
      }
      for (int i = 1; i <= n; i++)
      {
            bool ok = true;
            for (int j = 0; j < 30; j++)
            {
                  if (cnt[j] % i != 0)
                  {
                        ok = false;
                  }
            }
            if (ok)
            {
                  cout << i << ' ';
            }
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