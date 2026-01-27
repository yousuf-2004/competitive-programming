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
      int n, k;
      cin >> n >> k;
      vector<int> a(n), b(k);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < k; i++)
      {
            cin >> b[i];
      }
      sort(a.rbegin(), a.rend());
      sort(b.begin(), b.end());

      int l = 0, cnt = 0;
      for (int i = 0; i < k; ++i)
      {
            int x = b[i];
            if (l + x - 1 >= n)
            {
                  break;
            }
            cnt += a[l + (x - 1)];
            l += x;
      }

      int sum = 0;
      for (auto it : a)
      {
            sum += it;
      }
      cout << (sum - cnt) << '\n';
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