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
      vector<int> v(n + 1, 0);
      vector<int> pos(n + 1, 0);
      for (int i = 1; i <= n; i++)
      {
            cin >> v[i];
            pos[v[i]] = i;
      }
      int cnt = 0;
      for (int i = 2; i <= n; i++)
      {
            if (pos[i - 1] > pos[i])
            {
                  cnt++;
            }
      }
      cout << cnt << "\n";
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}