#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 2e5 + 9;
int a[N];

bool ask(int l, int r)
{
      cout << "? " << (r - l + 1) << ' ';
      int add = 0;
      for (int i = l; i <= r; i++)
      {
            cout << i << ' ';
            add += a[i];
      }
      cout << endl;
      int ans;
      cin >> ans;
      return ans > add;
}

void solve()
{

      int n;
      cin >> n;
      for (int i = 1; i <= n; i++)
      {
            cin >> a[i];
      }
      int l = 1, r = n, ans = 0;
      while (l <= r)
      {
            int m = (l + r) >> 1;
            if (ask(l, m))
            {
                  ans = m;
                  r = m - 1;
            }
            else
                  l = m + 1;
      }
      cout << "! " << ans << endl;
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