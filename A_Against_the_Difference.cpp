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
      map<int, int> freq;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
            freq[a[i]]++;
      }

      int ans = 0;
      for (auto &[x, y] : freq)
      {
            ans += (y / x) * x;
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