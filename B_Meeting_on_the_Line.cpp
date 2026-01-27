#include <bits/stdc++.h>
#define int long long
#define ld long double
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int n;
ld ans;
vector<int> x, t;
bool find(ld T)
{
      ld l = 0, r = 1e8;
      for (int i = 0; i < n; i++)
      {
            ld d = max(T - (ld)t[i], (ld)0);
            ld L = (ld)x[i] - d;
            ld R = (ld)x[i] + d;

            l = max(l, L);
            r = min(r, R);

            if (l > r)
            {
                  return false;
            }
      }
      ans = (l + r) / 2;
      return true;
}
void solve()
{
      cin >> n;
      x.resize(n);
      for (int i = 0; i < n; i++)
      {
            cin >> x[i];
      }

      t.resize(n);
      for (int i = 0; i < n; i++)
      {
            cin >> t[i];
      }

      ld l = 0, r = 1e9;
      for (int i = 0; i < 60; i++)
      {
            ld mid = (l + r) / 2;
            if (find(mid))
            {
                  r = mid;
            }
            else
            {
                  l = mid;
            }
      }

      cout << setprecision(16) << ans << '\n';
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