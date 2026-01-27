#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
bool ok(int ops, vector<int> a, vector<int> b)
{
      for (int i = 0; i < ops; i++)
      {
            a.pop_back();
            b.pop_back();
      }

      reverse(b.begin(), b.end());

      for (int i = 0; i < a.size(); i++)
      {
            if (a[i] >= b[i])
            {
                  return false;
            }
      }
      return true;
}
void solve()
{
      int n, m;
      cin >> n >> m;
      vector<int> a(n - 1), b(n);
      for (int i = 0; i < n - 1; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> b[i];
      }
      a.push_back(1);
      sort(a.begin(), a.end());
      sort(b.rbegin(), b.rend());

      int l = 0, r = n, ans = 0;
      while (l <= r)
      {
            int mid = (l + r) / 2;
            if (ok(mid, a, b))
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