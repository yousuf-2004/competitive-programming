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
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      int ans = 0;

      for (int j = 1; j < n - 1; j++)
      {
            int l = 0, r = 0;

            for (int i = 0; i < j; i++)
            {
                  if (a[i] < a[j])
                        l++;
            }

            for (int k = j + 1; k < n; k++)
            {
                  if (a[k] > a[j])
                        r++;
            }

            ans += l * r;
      }

      cout << ans << "\n";
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