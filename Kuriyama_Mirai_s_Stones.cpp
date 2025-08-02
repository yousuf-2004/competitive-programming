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
      vector<int> b = a;
      sort(b.begin(), b.end());
      vector<int> pref(n + 1, 0);
      vector<int> pref1(n + 1, 0);
      for (int i = 1; i <= n; i++)
      {
            pref[i] = pref[i - 1] + a[i - 1];
            pref1[i] = pref1[i - 1] + b[i - 1];
      }
      int q;
      cin >> q;
      while (q--)
      {
            int type, l, r;
            cin >> type >> l >> r;
            if (type == 1)
            {
                  cout << pref[r] - pref[l - 1] << endl;
            }
            else
            {
                  cout << pref1[r] - pref1[l - 1] << endl;
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