#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int n, m, k;
bool can_be_friends(int x, int y)
{
      int cnt = 0;
      for (int i = 0; i < n; i++)
      {
            int x_bit = (x >> i) & 1;
            int y_bit = (y >> i) & 1;
            if (x_bit != y_bit)
            {
                  cnt++;
            }
      }
      return cnt <= k;
}
void solve()
{
      cin >> n >> m >> k;
      int v[m + 2];
      for (int i = 1; i <= m + 1; i++)
      {
            cin >> v[i];
      }
      int friends = 0;
      for (int i = 1; i <= m; i++)
      {
            friends += can_be_friends(v[i], v[m + 1]);
      }
      cout << friends << '\n';
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