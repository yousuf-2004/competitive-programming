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
      string s;
      cin >> s;
      vector<int> v;
      int total = 0;
      int min_change = 0;
      for (int i = 0; i < n; i++)
      {
            int l = i;
            int r = n - i - 1;
            if (s[i] == 'L')
            {
                  if (r > l)
                  {
                        v.push_back(r - l);
                        total += r;
                        min_change++;
                  }
                  else
                  {
                        total += l;
                  }
            }
            else
            {
                  if (l > r)
                  {
                        v.push_back(l - r);
                        total += l;
                        min_change++;
                  }
                  else
                  {
                        total += r;
                  }
            }
      }
      vector<int> ans(n + 1);
      for (int i = min_change; i <= n; i++)
      {
            ans[i] = total;
      }
      sort(v.rbegin(), v.rend());
      for (int i = min_change - 1; i >= 1; i--)
      {
            total -= v.back();
            v.pop_back();
            ans[i] = total;
      }
      for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";
      cout << "\n";
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}