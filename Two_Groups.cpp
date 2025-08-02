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
      int pos = 0;
      int neg = 0;
      for (int i = 0; i < n; i++)
      {
            if (a[i] < 0)
            {
                  neg += abs(a[i]);
            }
            else
            {
                  pos += a[i];
            }
      }
      if (neg >= pos)
      {
            cout << neg - pos << endl;
      }
      else
      {
            cout << pos - neg << endl;
      }
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