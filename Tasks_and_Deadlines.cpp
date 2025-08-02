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
      vector<int> v;
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            int duration, deadline;
            cin >> duration >> deadline;
            v.push_back(duration);
            ans += deadline;
      }
      sort(v.begin(), v.end());
      int finishing_time = 0;
      for (auto duration : v)
      {
            finishing_time += duration;
            ans -= finishing_time;
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