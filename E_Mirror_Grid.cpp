#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
      int n;
      cin >> n;
      vector<string> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      int ans = 0;
      for (int layer = 0; layer < n / 2; layer++)
      {
            for (int i = 0; i < n - 2 * layer - 1; i++)
            {
                  int one = 0, zero = 0;

                  char c1 = a[layer][layer + i];
                  char c2 = a[layer + i][n - layer - 1];
                  char c3 = a[n - layer - 1][n - layer - 1 - i];
                  char c4 = a[n - layer - 1 - i][layer];

                  vector<char> vals = {c1, c2, c3, c4};
                  for (char ch : vals)
                  {
                        if (ch == '0')
                              zero++;
                        else
                              one++;
                  }

                  ans += min(zero, one);
            }
      }

      cout << ans << '\n';
}

signed main()
{
      ios::sync_with_stdio(false);
      cin.tie(nullptr);
      int t;
      cin >> t;
      while (t--)
            solve();
}
