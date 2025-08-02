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
      int x, n;
      cin >> x >> n;
      priority_queue<int, vector<int>, greater<int>> q;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            q.push(x);
      }
      int ans = 0;
      while (q.size() > 1)
      {
            int x = q.top();
            q.pop();
            int y = q.top();
            q.pop();
            ans += x + y;
            q.push(x + y);
      }
      cout << ans << '\n';
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