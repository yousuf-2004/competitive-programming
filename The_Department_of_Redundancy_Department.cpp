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
      int x;
      map<int, int> mp;
      vector<int> v;
      while (cin >> x)
      {
            if (mp[x] == 0)
            {
                  v.push_back(x);
            }
            mp[x]++;
      }
      for (int i = 0; i < v.size(); i++)
      {
            cout << v[i] << " " << mp[v[i]] << endl;
      }
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