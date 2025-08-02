#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 2e5 + 9;
int n, x, a[N];
void solve()
{
      cin >> n >> x;
      for (int i = 1; i <= n; i++)
      {
            cin >> a[i];
      }
      map<int, int> mp;
      for (int i = 1; i <= n; i++)
      {
            if (mp.find(x - a[i]) != mp.end())
            {
                  cout << mp[x - a[i]] << ' ' << i << '\n';
                  return;
            }
            mp[a[i]] = i;
      }
      cout << "IMPOSSIBLE" << '\n';
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