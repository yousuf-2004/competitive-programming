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
      int n, m;
      cin >> n >> m;
      vector<int> a(n), b(m);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < m; i++)
      {
            cin >> b[i];
      }
      int i = 0, j = 0;
      while (i < n and j < m)
      {
            if (a[i] < b[j])
            {
                  i++;
            }
            else
            {
                  cout << i << ' ';
                  j++;
            }
      }
      if (j < m)
      {
            while (j < m)
            {
                  cout << i << ' ';
                  j++;
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