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
      bool even = 1, odd = 0;
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                  even = 0;
            }
            else
            {
                  odd = 1;
            }
      }
      if (even == 0 && odd == 1)
      {
            sort(a.begin(), a.end());
      }
      for (int i = 0; i < n; i++)
      {
            if (i)
            {
                  cout << ' ';
            }
            cout << a[i];
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