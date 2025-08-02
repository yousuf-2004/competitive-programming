#include <bits/stdc++.h>
using namespace std;

void solve()
{
      int n, m;
      cin >> n >> m;

      long long total = 0;
      int neg_count = 0;
      int min_abs = INT_MAX;

      for (int i = 0; i < n * m; ++i)
      {
            int x;
            cin >> x;
            if (x < 0)
                  neg_count++;
            total += abs(x);
            min_abs = min(min_abs, abs(x));
      }

      if (neg_count % 2 == 0)
      {
            cout << total << '\n';
      }
      else
      {
            cout << total - 2 * min_abs << '\n';
      }
}

int main()
{
      ios::sync_with_stdio(false);
      cin.tie(nullptr);

      int t;
      cin >> t;
      while (t--)
            solve();

      return 0;
}
