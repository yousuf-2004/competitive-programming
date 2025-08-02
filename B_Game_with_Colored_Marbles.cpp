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
      vector<int> v(n), freq(n + 1, 0);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
            freq[v[i]]++;
      }
      int ans = 0;
      int cnt = 0;
      for (int i = 1; i <= n; i++)
      {
            if (freq[i] > 1)
            {
                  ans++;
            }
            if (freq[i] == 1)
            {
                  cnt++;
            }
      }
      ans += (cnt + 1) / 2 * 2;
      cout << ans << '\n';
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}