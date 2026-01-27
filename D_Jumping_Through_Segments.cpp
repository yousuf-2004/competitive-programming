#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int n;
vector<pair<int, int>> v;
bool ok(int k)
{
      int x = 0, y = 0;
      for (int i = 0; i < n; i++)
      {
            x = max(x - k, v[i].first);
            y = min(y + k, v[i].second);
            if (x > y)
            {
                  return false;
            }
      }
      return true;
}
void solve()
{
      v.clear();
      cin >> n;
      for (int i = 0; i < n; i++)
      {
            int l, r;
            cin >> l >> r;
            v.push_back({l, r});
      }

      int l = -1, r = 1e9, ans = 0;
      while (l <= r)
      {
            int mid = (l + r) / 2;
            if (ok(mid))
            {
                  ans = mid;
                  r = mid - 1;
            }
            else
            {
                  l = mid + 1;
            }
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