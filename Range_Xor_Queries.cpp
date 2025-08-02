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
      int n, q;
      cin >> n >> q;
      vector<int> v(n);
      for (int i = 0; i < n; ++i)
      {
            cin >> v[i];
      }
      vector<int> prefix_xor(n);
      prefix_xor[0] = v[0];
      for (int i = 1; i < n; ++i)
      {
            prefix_xor[i] = prefix_xor[i - 1] ^ v[i];
      }
      while (q--)
      {
            int l, r;
            cin >> l >> r;
            if (l == 1)
            {
                  cout << prefix_xor[r - 1] << '\n';
            }
            else
            {
                  cout << (prefix_xor[r - 1] ^ prefix_xor[l - 2]) << '\n';
            }
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