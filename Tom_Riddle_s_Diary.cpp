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
      set<string> se;
      for (int i = 0; i < n; i++)
      {
            string x;
            cin >> x;
            if (se.find(x) != se.end())
            {
                  cout << "YES" << '\n';
            }
            else
            {
                  cout << "NO" << '\n';
                  se.insert(x);
            }
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