#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

int cnt_bit(int x)
{
      int cnt = 0;
      for (int i = 0; i < 10; i++)
      {
            if ((x >> i) & 1)
            {
                  cnt++;
            }
      }
      return cnt;
}
void solve()
{
      int n;
      cin >> n;
      int ans = 0;
      for (int i = 1; i <= n; i++)
      {
            ans += cnt_bit(i);
      }
      cout << ans << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}