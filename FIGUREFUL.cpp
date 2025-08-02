#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      cin >> t;
      map<pair<int, int>, string> mp;
      while (t--)
      {
            int n, m;
            cin >> n >> m;
            string s;
            cin >> s;
            pair<int, int> p = {n, m};
            mp[p] = s;
      }
      int q;
      cin >> q;
      while (q--)
      {
            int n, m;
            cin >> n >> m;
            pair<int, int> p = {n, m};
            cout << mp[p] << endl;
      }

      return 0;
}