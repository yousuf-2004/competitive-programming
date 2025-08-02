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
      a[0] = 1;
      a[1] = n;
      for (int i = 2; i < n; i++)
      {
            a[i] = i;
      }
      for (int i = 0; i < n; i++)
      {
            cout << a[i] << " ";
      }
      cout << endl;
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