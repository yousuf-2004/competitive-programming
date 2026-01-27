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
      int sum = 0;
      int cnt = 1;

      while (sum + cnt * cnt * cnt <= n && v.size() < 10000)
      {
            v.push_back(cnt);
            sum += cnt * cnt * cnt;
            cnt++;
      }

      while (sum < n && v.size() < 10000)
      {
            v.push_back(1);
            sum += 1;
      }

      while (sum > n && v.size() < 10000)
      {
            v.push_back(-1);
            sum -= 1;
      }

      cout << v.size() << "\n";
      for (auto x : v)
      {
            cout << x << " ";
      }
      cout << "\n";
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