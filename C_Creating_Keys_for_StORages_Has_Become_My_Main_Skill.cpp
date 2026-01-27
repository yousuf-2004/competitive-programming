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
      int len, val;
      cin >> len >> val;
      vector<int> ans(len, val);
      int or_val = 0;
      bool flag = true;
      for (int i = 0; i < len - 1; ++i)
      {
            if (((or_val | i) & val) == (or_val | i))
            {
                  or_val |= i;
                  ans[i] = i;
            }
            else
            {
                  flag = false;
                  break;
            }
      }
      if (flag && (or_val | (len - 1)) == val)
      {
            ans[len - 1] = len - 1;
      }
      for (auto it : ans)
            cout << it << ' ';
      cout << '\n';
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