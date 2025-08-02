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
      int m = n * (n - 1) / 2;
      vector<int> b(m);
      for (int i = 0; i < m; i++)
      {
            cin >> b[i];
      }
      sort(b.begin(), b.end());
      for (int i = 0; i < m; i += --n)
      {
            cout << b[i] << ' ';
      }
      cout << "1000000000\n";
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