#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
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
      vector<int> prefix(n);
      prefix[0] = a[0];
      for (int i = 1; i < n; i++)
      {
            prefix[i] = prefix[i - 1] + a[i];
      }
      int q;
      cin >> q;
      while (q--)
      {
            int l, r;
            cin >> l >> r;
            if (l == 0)
            {
                  cout << prefix[r] << endl;
            }
            else
            {
                  cout << prefix[r] - prefix[l - 1] << endl;
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