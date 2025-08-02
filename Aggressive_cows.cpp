#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1e5 + 9;
int n, c, a[N];
bool ok(int x)
{
      int cnt = 1;
      int pos = a[0];
      for (int i = 0; i < n; i++)
      {
            if (a[i] - pos >= x)
            {
                  cnt++;
                  pos = a[i];
            }
      }
      return cnt >= c;
}
void solve()
{
      cin >> n >> c;
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      cout << '\n';
      sort(a, a + n);
      int l = 0, r = 1e9, ans = 0;
      while (l <= r)
      {
            int mid = l + (r - l) / 2;
            if (ok(mid))
            {
                  ans = mid;
                  l = mid + 1;
            }
            else
            {
                  r = mid - 1;
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