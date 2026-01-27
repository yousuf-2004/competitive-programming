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
      int ans = 0, cnt = 0;
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
            ans += a[i];
            cnt += (a[i] & 1);
            cout<<cnt<<' ';
      }
      cout<<'\n';

      if (!cnt || cnt == n)
      {
            cout << *max_element(a.begin(), a.end()) << '\n';
      }
      else
      {
            cout << ans - cnt + 1 << '\n';
      }
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