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
      int n, k;
      cin >> n >> k;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      int r = 0, ans = 0;
      multiset<int> se;
      for (int l = 0; l < n; l++)
      {
            while (r < n)
            {
                  se.insert(a[r]);
                  if (*se.rbegin() - *se.begin() <= k)
                  {
                        r++;
                  }
                  else
                  {
                        se.erase(se.find(a[r]));
                        break;
                  }
            }
            ans += r - l;
            se.erase(se.find(a[l]));
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