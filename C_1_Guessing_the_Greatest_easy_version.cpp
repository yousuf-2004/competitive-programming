#include <bits/stdc++.h>
//#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int ok(int l, int r)
{
      if (l >= r)
      {
            return -1;
      }
      cout << "? " << l + 1 << ' ' << r + 1 << '\n';
      int ans;
      cin >> ans;
      return ans - 1;
}
void solve()
{
      int n;
      cin >> n;
      int l = 0, r = n;
      while (r - l > 1)
      {
            int mid = (l + r) / 2;
            int mx = ok(l, r - 1);
            if (mx < mid)
            {
                  if (ok(l, mid - 1) == mx)
                  {
                        r = mid;
                  }
                  else
                  {
                        l = mid;
                  }
            }
            else
            {
                  if (ok(mid, r - 1) == mx)
                  {
                        l = mid;
                  }
                  else
                  {
                        r = mid;
                  }
            }
      }
      cout << "! " << r << '\n';
}

signed main()
{
      /* ios_base::sync_with_stdio(false);
      cin.tie(NULL); */
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}