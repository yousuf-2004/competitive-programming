#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
      int n;
      cin >> n;

      vector<int> a(n + 1);
      for (int i = 1; i <= n; i++)
      {
            cin >> a[i];
      }
      sort(a.begin(), a.end());

      for (int i = 2; i <= n - 1; i += 2)
      {
            if (a[i] != a[i + 1])
            {
                  cout << "NO\n";
                  return;
            }
      }

      cout << "YES\n";
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