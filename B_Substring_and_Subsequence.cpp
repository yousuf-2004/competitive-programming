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
      string a, b;
      cin >> a >> b;

      int ans = a.size() + b.size();

      for (int i = 0; i < b.size(); i++)
      {
            int mark = i;
            for (int j = 0; j < a.size(); j++)
            {
                  if (mark < b.size() && a[j] == b[mark])
                  {
                        mark++;
                  }
            }
            ans = min(ans, (int)a.size() + (int)b.size() - mark + i);
      }

      cout << ans << '\n';
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