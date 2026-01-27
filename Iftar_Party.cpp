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
      int p, l;
      cin >> p >> l;

      if (l * 2 >= p)
      {
            cout << "impossible\n";
            return;
      }
      int n = p - l;
      vector<int> ans;
      for (int i = 1; i * i <= n; i++)
      {
            if (n % i == 0)
            {
                  ans.push_back(i);
                  if (i != n / i)
                  {
                        ans.push_back(n / i);
                  }
            }
      }
      sort(ans.begin(), ans.end());
      for (auto a : ans)
      {
            if (a > l)
            {
                  cout << a << ' ';
            }
      }
      cout << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      cin >> t;
      for (int i = 1; i <= t; i++)
      {
            cout << "Case " << i << ": ";
            solve();
      }
      return 0;
}