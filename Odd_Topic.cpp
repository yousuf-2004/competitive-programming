#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1e5 + 9, max_val = 4005;
bitset<max_val> prefix_mask_a[N], prefix_mask_b[N];
int a[N], b[N];
void solve()
{
      int n, m, q;
      cin >> n >> m >> q;
      for (int i = 1; i <= n; i++)
      {
            cin >> a[i];
      }

      for (int i = 1; i <= m; i++)
      {
            cin >> b[i];
      }

      prefix_mask_a[0].reset();
      for (int i = 1; i <= n; i++)
      {
            prefix_mask_a[i] = prefix_mask_a[i - 1];
            prefix_mask_a[i].flip(a[i]);
      }

      prefix_mask_b[0].reset();
      for (int i = 1; i <= n; i++)
      {
            prefix_mask_b[i] = prefix_mask_b[i - 1];
            prefix_mask_b[i].flip(b[i]);
      }

      while (q--)
      {
            int l1, r1, l2, r2;
            cin >> l1 >> r1 >> l2 >> r2;
            auto subarray_xor_a = prefix_mask_a[r1] ^ prefix_mask_a[l1 - 1];
            auto subarray_xor_b = prefix_mask_b[r2] ^ prefix_mask_b[l2 - 1];
            auto marge_mask = subarray_xor_a ^ subarray_xor_b;
            int set_cnt = marge_mask.count();
            cout << set_cnt << '\n';
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