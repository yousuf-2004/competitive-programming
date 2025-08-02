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
      int n, m;
      cin >> n >> m;
      vector<int> a(n), b(m);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < m; i++)
      {
            cin >> b[i];
      }
      sort(a.begin(), a.end());
      sort(b.rbegin(), b.rend());
      int r = m - 1, l = 0, i = 0, j = n - 1;
      int ans = 0;
      while (i <= j && r >= l)
      {
            int left = abs(a[i] - b[l]);
            int right = abs(a[j] - b[r]);
            int mx = max(left, right);
            ans += mx;
            if (left == mx)
            {
                  i++;
                  l++;
            }
            else if (right == mx)
            {
                  j--;
                  r--;
            }
      }
      cout << ans << "\n";
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}