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
      if (n == 1)
      {
            cout << 1 << '\n';
            return;
      }
      int state = 0;
      int ans = 0;
      for (int i = 1; i < n; i++)
      {
            if (v[i - 1] < v[i] and state != 1)
            {
                  ans++;
                  state = 1;
            }
            else if (v[i - 1] > v[i] and state != -1)
            {
                  ans++;
                  state = -1;
            }
      }
      cout << ans + 1 << '\n';
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