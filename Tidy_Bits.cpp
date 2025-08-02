#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int cnt_bits(int x)
{
      int cnt = 0;
      for (int i = 0; i < 32; i++)
      {
            if (x & (1LL << i))
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
      int m = cnt_bits(n);
      int ans = 0;
      for (int i = 0; i < m; i++)
      {
            ans += (1LL << i);
      }
      cout << ans << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}