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
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      int l = 0, r = n - 1;
      int mn = 1, mx = n;
      while (l <= r)
      {
            if (v[l] == mn)
            {
                  l++;
                  mn++;
            }
            else if (v[l] == mx)
            {
                  l++;
                  mx--;
            }
            else if (v[r] == mn)
            {
                  r--;
                  mn++;
            }
            else if (v[r] == mx)
            {
                  r--;
                  mx--;
            }
            else
            {
                  break;
            }
      }
      if (l <= r)
      {
            cout << l + 1 << " " << r + 1 << '\n';
      }
      else
      {
            cout << -1 << '\n';
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