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
      vector<int> check(n, -1);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      for (int i = 1; i < n; i++)
      {
            check[i] = check[i - 1];
            if (v[i] != v[i - 1])
            {
                  check[i] = i - 1;
            }
      }
      int q;
      cin >> q;
      while (q--)
      {
            int l, r;
            cin >> l >> r;
            l--, r--;
            if (check[r] < l)
            {
                  cout << -1 << ' ' << -1 << '\n';
            }
            else
            {
                  cout << check[r] + 1 << ' ' << r + 1 << '\n';
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