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
            char c;
            cin >> c;
            v[i] = c - '0';
      }

      bool ok = false;
      for (int i = 1; i < n; i++)
      {
            if (v[i] < v[i - 1])
            {
                  ok = true;
            }
      }
      if (!ok)
      {
            cout << "Bob\n";
            return;
      }

      cout << "Alice\n";
      vector<int> ans;
      int l = 0, r = n - 1;
      while (l < r)
      {
            while (l < n && v[l] != 1)
            {
                  l++;
            }
            while (r >= 0 && v[r] != 0)
            {
                  r--;
            }
            if (l >= r)
            {
                  break;
            }
            ans.push_back(l);
            ans.push_back(r);
            l++, r--;
      }

      sort(ans.begin(), ans.end());
      cout << ans.size() << '\n';
      for (auto a : ans)
      {
            cout << a + 1 << ' ';
      }
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