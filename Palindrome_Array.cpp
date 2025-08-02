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
      vector<int> b(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
            b[i] = a[i];
      }
      reverse(b.begin(), b.end());
      for (int i = 0; i < n; i++)
      {
            if (a[i] != b[i])
            {
                  cout << "NO" << endl;
                  return;
            }
      }
      cout << "YES" << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}