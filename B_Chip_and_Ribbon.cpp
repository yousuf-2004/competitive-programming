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
      vector<int> c(n);
      for (int i = 0; i < n; i++)
      {
            cin >> c[i];
      }
      int sum = 0;
      int last = 0;
      for (int i = 0; i < n; i++)
      {
            if (c[i] > last)
            {
                  sum += c[i] - last;
            }
            last = c[i];
      }
      cout << sum - 1 << "\n";
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}