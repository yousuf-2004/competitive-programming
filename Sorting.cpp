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
      for (int i = 0; i < n - 1; i++)
      {
            for (int j = 0; j < n - i - 1; j++)
            {
                  if (a[j] > a[j + 1])
                  {
                        swap(a[j], a[j + 1]);
                  }
            }
      }
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