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
      map<int, int> mp;
      for (int i = 0; i < n; i++)
      {
            mp[a[i]]++;
      }
      auto f = mp.begin();
      int it = f->second;
      if (it & 1)
      {
            cout << "Lucky" << endl;
      }
      else
      {
            cout << "Unlucky" << endl;
      }
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}