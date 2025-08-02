#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int find(int l, int r, vector<int> &p)
{
      return p[r] - (l ? p[l - 1] : 0);
}
void solve()
{
      int n, m;
      cin >> n >> m;
      vector<int> v(n), p(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
            if (i == 0)
            {
                  p[i] = v[i];
            }
            else
            {
                  p[i] = p[i - 1] + v[i];
            }
      }

      int ans = INT_MAX;

      for (int i = 0; i < n; i++)
      {
            int l = i, r = n - 1, pos = -1;
            while (l <= r)
            {
                  int mid = (l + r) / 2;
                  if (find(i, mid, p) <= m)
                  {
                        pos = mid;
                        l = mid + 1;
                  }
                  else
                  {
                        r = mid - 1;
                  }
            }
            if (pos == -1 || find(i, pos, p) != m)
            {
                  continue;
            }
            ans = min(ans, n - (pos - i + 1));
      }
      cout << (ans == INT_MAX ? -1 : ans) << '\n';
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