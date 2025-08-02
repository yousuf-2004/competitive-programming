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
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      int mx = INT_MIN;
      int mx_mark = 0;
      int mn = INT_MAX;
      int mn_mark = 0;
      for (int i = 0; i < n; i++)
      {
            if (a[i] >= mx)
            {
                  mx = a[i];
                  mx_mark = i;
            }
            if (a[i] <= mn)
            {
                  mn = a[i];
                  mn_mark = i;
            }
      }
      swap(a[mx_mark], a[mn_mark]);
      for (int i = 0; i < n; i++)
      {
            cout << a[i] << " ";
      }
      cout << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}