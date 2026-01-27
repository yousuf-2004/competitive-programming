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
      int sum = 0, cnt = 0;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            sum += x;
            if (x > 0)
            {
                  cnt++;
            }
      }

      int ans = min<int>(cnt, sum - n + 1);
      ans = max(0LL, ans);
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