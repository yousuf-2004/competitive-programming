#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
int max_number(int n, vector<int> &a)
{
      if (n == 1)
      {
            return a[0];
      }
      return max(a[n - 1], max_number(n - 1, a));
}

void solve()
{
      int n;
      cin >> n;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      cout << max_number(n, a) << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}