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
      int n, h;
      cin >> n >> h;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      //using lamda function here 
      auto fit = [&](int k)
      {
            vector<int> a(v.begin(), v.begin() + k);
            sort(a.rbegin(), a.rend());
            int total_height = 0;
            for (int i = 0; i < k; i += 2)
            {
                  total_height += a[i];
            }
            return total_height <= h;
      };

      int l = 1, r = n, ans = 1;
      while (l <= r)
      {
            int mid = (l + r) / 2;
            if (fit(mid))
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
      // cin >> t;
      while (t--)
            solve();
      return 0;
}