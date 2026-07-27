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
      vector<int> v(n);
      for (int &i : v)
            cin >> i;
      map<int, int> mp;
      for (int I : v)
            mp[I]++;
      int win = 1e10;
      bool ans = false;
      for (auto it = mp.rbegin(); it != mp.rend(); it++)
      {
            int a = it->first, b = it->second;
            if (a <= win)
            {
                  if (b % 2 == 0)
                  {
                        ans = true;
                        break;
                  }
                  else
                  {
                        win = a - k - 1;
                  }
            }
            else
            {
                  ans = true;
                  break;
            }
      }
      if (ans)
            cout << "YES" << endl;
      else
            cout << "NO" << endl;
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