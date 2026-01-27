#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int n, w;
bool ok(double mid, vector<int> &p, vector<int> &t, int w)
{
      double k = 0;
      for (int i = 0; i < n; i++)
      {
            double time = mid - 2.0 * t[i];
            if (time > 0)
            {
                  k += time * p[i];
            }
      }
      return k >= w;
}
void solve()
{

      cin >> n >> w;

      vector<int> p(n), t(n);
      for (int i = 0; i < n; i++)
      {
            cin >> p[i] >> t[i];
      }

      double l = 0, r = 1e15;

      for (int i = 0; i < 500; i++)
      {
            double mid = (l + r) / 2;

            if (ok(mid, p, t, w))
            {
                  r = mid;
            }
            else
            {
                  l = mid;
            }
      }

      cout << fixed << setprecision(12) << r << endl;
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