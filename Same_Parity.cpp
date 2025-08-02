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
      int even = 0, odd = 0;
      for (auto x : a)
      {
            if (x % 2 == 0)
                  even++;
            else
                  odd++;
      }

      int even_pos = n / 2;
      int odd_pos = (n + 1) / 2;
      bool ok = false;
      if (even == even_pos && odd == odd_pos)
      {
            ok = true;
      }
      else if (even == odd_pos && odd == even_pos)
      {
            ok = true;
      }
      else
      {
            ok = false;
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