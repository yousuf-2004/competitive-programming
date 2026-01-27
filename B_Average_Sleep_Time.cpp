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
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      int sum = 0;
      for (int i = 0; i < k; i++)
            sum += v[i];

      int window_sum = sum;
      for (int i = k; i < n; i++)
      {
            window_sum += v[i] - v[i - k];
            sum += window_sum;
      }

      cout << fixed << setprecision(10) << 1.0 * sum / (n - k + 1) << '\n';
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