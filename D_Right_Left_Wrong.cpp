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
      vector<long long> a(n + 1, 0);
      for (int i = 1; i <= n; i++)
      {
            long long x;
            cin >> x;
            a[i] = a[i - 1] + x;
      }

      string s;
      cin >> s;

      int ans = 0, l = 0, r = n - 1;
      while (r > l)
      {
            while (l < n && s[l] == 'R')
                  l++;
            while (r >= 0 && s[r] == 'L')
                  r--;
            if (l < r)
            {
                  ans += a[r + 1] - a[l];
                  l++;
                  r--;
            }
      }

      cout<<ans<<'\n';
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