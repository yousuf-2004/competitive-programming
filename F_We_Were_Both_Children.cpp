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

      vector<int> a(n);
      vector<int> freq(n + 1, 0);

      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
            if (a[i] <= n)
                  freq[a[i]]++;
      }

      int ans = 0;

      for (int X = 1; X <= n; X++)
      {
            int caught = 0;
            for (int d = 1; d * d <= X; d++)
            {
                  if (X % d == 0)
                  {
                        caught += freq[d];
                        if (d != X / d)
                              caught += freq[X / d];
                  }
            }
            ans = max(ans, caught);
      }

      cout << ans << '\n';
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