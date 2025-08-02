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
      string s, r;
      cin >> s >> r; // r.size()=n-1
      int cnt_0 = count(s.begin(), s.end(), '0');
      int cnt_1 = n - cnt_0;
      for (int i = 0; i < n - 1; i++)
      {
            if (cnt_0 == 0 || cnt_1 == 0)
            {
                  cout << "NO" << "\n";
                  return;
            }
            if (r[i] == '1')
            {
                  cnt_0--;
            }
            else
            {
                  cnt_1--;
            }
      }
      cout << "YES" << "\n";
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}