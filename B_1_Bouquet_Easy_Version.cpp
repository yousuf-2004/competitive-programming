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
      int n, m;
      cin >> n >> m;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      sort(a.begin(), a.end());
      vector<int> prefix(n);
      prefix[0] = a[0];
      for (int i = 1; i < n; i++)
      {
            prefix[i] = prefix[i - 1] + a[i];
      }
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            int temp = (i == 0 ? 0 : prefix[i - 1]) + m;
            int index1 = upper_bound(a.begin(), a.end(), a[i] + 1) - a.begin();
            index1--;
            int index2 = upper_bound(prefix.begin(), prefix.end(), temp) - prefix.begin();
            index2--;
            if (index2 < i)
            {
                  continue;
            }
            if (index2 <= index1)
            {
                  ans = max(ans, prefix[index2] - (i == 0 ? 0 : prefix[i - 1]));
            }
            else
            {
                  ans = max(ans, prefix[index1] - (i == 0 ? 0 : prefix[i - 1]));
            }
      }
      cout << ans << "\n";
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}