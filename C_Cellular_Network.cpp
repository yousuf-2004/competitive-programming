#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
bool isValid(int r, const vector<int> &a, const vector<int> &b)
{
      int j = 0;
      for (int i = 0; i < a.size(); ++i)
      {
            while (j + 1 < b.size() && abs(b[j + 1] - a[i]) <= abs(b[j] - a[i]))
            {
                  ++j;
            }
            if (abs(b[j] - a[i]) > r)
                  return false;
      }
      return true;
}

void solve()
{
      int n, m;
      cin >> n >> m;
      vector<int> a(n), b(m);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < m; i++)
      {
            cin >> b[i];
      }

      int left = 0, right = 2e9, ans = -1;
      while (left <= right)
      {
            int mid = left + (right - left) / 2;
            if (isValid(mid, a, b))
            {
                  ans = mid;
                  right = mid - 1;
            }
            else
            {
                  left = mid + 1;
            }
      }

      cout << ans << endl;
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