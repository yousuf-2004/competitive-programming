#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

const int maxn = 2e5;
int n;
int a[maxn + 2], p[maxn + 2], s[maxn + 2];
void solve()
{
      cin >> n;
      for (int i = 1; i <= n; i++)
      {
            cin >> a[i];
      }
      p[0] = 0, s[n + 1] = 0;
      for (int i = 1; i <= n; i++)
            p[i] = p[i - 1] + a[i];
      for (int i = n; i >= 1; i--)
            s[i] = s[i + 1] + a[i];
      int i = 1, j = n;
      int ans = 0;
      while (i < j)
      {
            if (p[i] < s[j])
                  i++;
            else if (p[i] > s[j])
                  j--;
            else
            {
                  ans = max(ans, p[i]);
                  i++;
                  j--;
            }
      }
      cout << ans;
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