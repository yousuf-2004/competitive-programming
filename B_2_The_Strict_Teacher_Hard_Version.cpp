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
      int n, m, q;
      cin >> n >> m >> q;
      vector<int> b(m);
      for (int i = 0; i < m; i++)
      {
            cin >> b[i];
      }
      sort(b.begin(), b.end());
      while (q--)
      {
            int x;
            cin >> x;
            int right = lower_bound(b.begin(), b.end(), x) - b.begin();
            int left = right - 1;
            if (right == m)
            {
                  cout << (n - b[left]) << '\n';
            }
            else if (left == -1)
            {
                  cout << (b[right] - 1) << '\n';
            }
            else
            {
                  int distL = x - b[left], distR = b[right] - x;
                  cout << abs(distL - distR) / 2 + min(distL, distR) << '\n';
            }
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