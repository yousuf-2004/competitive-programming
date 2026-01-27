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
      vector<int> a;

      int ans = accumulate(v.begin(), v.end(), 0ll);
      while (n > 1)
      {
            for (int i = 0; i < n - 1; i++)
            {
                  a.push_back(v[i + 1] - v[i]);
            }
            ans = max(ans, abs(accumulate(a.begin(), a.end(), 0ll)));
            for (int i = 0; i < n - 1; i++)
            {
                  v[i] = a[i];
            }
            a.clear();
            n--;
      }
      cout << ans << '\n';
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