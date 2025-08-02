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
      int n, k, q;
      cin >> n >> k >> q;
      const int MAX = 2e5 + 5;
      vector<int> v(MAX, 0);
      for (int i = 0; i < n; i++)
      {
            int x, y;
            cin >> x >> y;
            v[x]++;
            v[y + 1]--;
      }
      for (int i = 1; i < MAX; i++)
      {
            v[i] += v[i - 1];
      }
      vector<int> ok(MAX, 0);
      for (int i = 0; i < MAX; i++)
      {
            if (v[i] >= k)
            {
                  ok[i] = 1;
            }
      }
      for (int i = 1; i < MAX; i++)
      {
            ok[i] += ok[i - 1];
      }
      while (q--)
      {
            int l, r;
            cin >> l >> r;
            cout << ok[r] - ok[l - 1] << '\n';
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}