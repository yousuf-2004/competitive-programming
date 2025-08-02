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
      vector<int> a(n + 1);
      for (int i = 1; i <= n; i++)
      {
            cin >> a[i];
      }
      for (int i = 1; i <= n; i++)
      {
            for (int j = i; j <= n; j++)
            {
                  int mx = INT_MIN;
                  for (int k = i; k <= j; k++)
                  {
                        mx = max(mx, a[k]);
                  }
                  cout << mx << " ";
            }
      }
      cout << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}