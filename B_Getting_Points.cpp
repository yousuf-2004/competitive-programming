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
      int n, p, l, t;
      cin >> n >> p >> l >> t;
      int lf = 0, r = n;
      int mid;
      int total = (n + 6) / 7;
      while (r - lf > 1)
      {
            mid = (lf + r) / 2;
            int pts = (n - mid) * l;
            int work = (n - mid);
            int temp = min(work * 2, total);
            pts += (temp * t);
            if (pts >= p)
            {
                  lf = mid;
            }
            else
            {
                  r = mid;
            }
      }
      cout << lf << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}