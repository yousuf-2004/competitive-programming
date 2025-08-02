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
      int n, j, k;
      cin >> n >> j >> k;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
            cin >> a[i];

      if (k == 1)
      {
            int mx = *max_element(a.begin(), a.end());
            if (a[j - 1] == mx)
            {
                  cout << "YES\n";
            }
            else
            {
                  cout << "NO\n";
            }
      }
      else
      {
            cout << "YES\n";
      }
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