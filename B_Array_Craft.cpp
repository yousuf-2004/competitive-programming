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
      int n, x, y;
      cin >> n >> x >> y;
      x--;
      y--;
      vector<int> a(n, 1);
      int e;
      e = -1;
      for (int i = x + 1; i < n; i++)
      {
            a[i] = e;
            e *= -1;
      }
      e = -1;
      for (int i = y - 1; i >= 0; i--)
      {
            a[i] = e;
            e *= -1;
      }
      for (int i = 0; i < n; i++)
      {
            if (i)
            {
                  cout << " ";
            }
            cout << a[i];
      }
      cout << "\n";
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