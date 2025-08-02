#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

int f(int x)
{
      int cur = 1;
      while (cur <= x)
      {
            cur *= 2;
      }
      return cur;
}
void solve()
{
      int n;
      cin >> n;
      cout << n << endl;
      vector<int> a(n + 1);
      for (int i = 1; i <= n; i++)
      {
            cin >> a[i];
            cout << i << " " << f(a[i]) - a[i] << endl;
      }
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}