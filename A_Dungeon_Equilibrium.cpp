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
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      unordered_map<int, int> freq;
      for (int x : a)
      {
            freq[x]++;
      }

      int ans = 0;
      for (auto [x, y] : freq)
      {
            if (y >= x)
                  ans += y - x;
            else
                  ans += y;
      }
      cout << ans << "\n";
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