#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int mod = 1e9 + 7;
void solve()
{
      int n, k;
      cin >> n >> k;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      int ans = 0, cur = 0;
      for (auto a : v)
      {
            cur += a;
            ans = max(ans, cur);
            cur = max(cur, 0ll);
      }
      int finalans = (accumulate(v.begin(), v.end(), 0ll) % mod + mod) % mod;
      for (int i = 0; i < k; i++)
      {
            finalans = (finalans + ans) % mod;
            ans = (ans * 2) % mod;
      }
      cout << finalans << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}