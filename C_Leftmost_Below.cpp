#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ivrahim

        ve Consistant;

        Stay Hungry;
*/

bool solve()
{
      int n;
      cin >> n;

      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }

      int min_pref = v[0];
      for (int val : v)
      {
            if (val >= 2 * min_pref)
                  return false;
            min_pref = min(min_pref, val);
      }
      return true;
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      cin >> t;
      while (t--)
            cout << (solve() ? "YES\n" : "NO\n");
      return 0;
}