#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int get_sum(int n)
{
      return (n * (n + 1)) / 2;
}
int get_range_sum(int l, int r)
{
      return get_sum(r) - get_sum(l - 1);
}
int k, x;
bool ok(int i)
{
      int sum = 0;
      if (i <= k)
      {
            sum = get_range_sum(1, i);
      }
      else
      {
            sum = get_range_sum(1, k) + get_range_sum(k - (i - k), k - 1);
      }
      return sum >= x;
}
void solve()
{
      cin >> k >> x;
      int l = 1, r = 2 * k - 1, ans = 2 * k - 1;
      while (l <= r)
      {
            int mid = l + (r - l) / 2;
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