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
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      int s = -1;
      vector<int> a;
      for (int i = 0; i < n; i++)
      {
            if (v[i] % 2 == 0)
            {
                  a.push_back(v[i]);
            }
            else if (v[i] > s)
            {
                  s = v[i];
            }
      }
      sort(a.begin(), a.end());
      int ans = a.size();
      if (s == -1 || a.empty())
      {
            cout << 0 << endl;
            return;
      }
      for (auto au : a)
      {
            if (au < s)
            {
                  s += au;
            }
            else
            {
                  ans++;
                  break;
            }
      }
      cout << ans << endl;
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}