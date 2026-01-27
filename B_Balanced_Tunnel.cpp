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
      vector<int> a(n), b(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
            a[i]--;
      }
      for (int i = 0; i < n; i++)
      {
            cin >> b[i];
            b[i]--;
      }

      map<int, int> pos;
      for (int i = 0; i < n; i++)
      {
            pos[b[i]] = i;
      }

      vector<int> c(n);
      for (int i = 0; i < n; i++)
      {
            c[i] = pos[a[i]];
      }

      int mx = -1, ans = 0;
      for (int i = 0; i < n; i++)
      {
            if (c[i] > mx)
                  mx = c[i];
            else
                  ans++;
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