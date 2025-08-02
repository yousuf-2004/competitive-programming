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
      vector<int> v(n + 1);
      for (int i = 1; i <= n; i++)
      {
            cin >> v[i];
      }
      if (v[1] != n)
      {
            cout << "NO" << endl;
            return;
      }
      vector<int> rotated(n + 1);
      for (int i = 1; i <= n; i++)
      {
            rotated[v[i]]++;
      }
      for (int i = n - 1; i >= 1; i--)
      {
            rotated[i] += rotated[i + 1];
      }
      if (rotated == v)
      {
            cout << "YES" << endl;
      }
      else
      {
            cout << "NO" << endl;
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