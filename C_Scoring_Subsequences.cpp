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
      int n;
      cin >> n;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      vector<int> res;
      for (int i = 0; i < n; i++)
      {
            int l = 1, r = i + 1;
            while (l <= r)
            {
                  int mid = (l + r) / 2;
                  if (a[i - mid + 1] >= mid)
                  {
                        l = mid + 1;
                  }
                  else
                  {
                        r = mid - 1;
                  }
            }
            res.push_back(r);
      }

      for (auto i : res)
      {
            cout << i << ' ';
      }
      cout << '\n';
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