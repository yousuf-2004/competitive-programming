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
      int n, k;
      cin >> n >> k;
      string s;
      cin >> s;

      if (n == k)
      {
            cout << string(n, '-') << '\n';
            return;
      }

      int cnt0 = 0, cnt1 = 0, cnt2 = 0;
      for (char ch : s)
      {
            if (ch == '0')
            {
                  cnt0++;
            }
            else if (ch == '1')
            {
                  cnt1++;
            }
            else
            {
                  cnt2++;
            }
      }

      int Lmin = 1 + cnt0;
      int Lmax = 1 + cnt0 + cnt2;
      int Rmin = n - cnt1 - cnt2;
      int Rmax = n - cnt1;

      string ans;
      ans.resize(n);
      for (int i = 1; i <= n; i++)
      {
            if (i < Lmin || i > Rmax)
            {
                  ans[i - 1] = '-';
            }
            else if (Lmax <= Rmin && i >= Lmax && i <= Rmin)
            {
                  ans[i - 1] = '+';
            }
            else
            {
                  ans[i - 1] = '?';
            }
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