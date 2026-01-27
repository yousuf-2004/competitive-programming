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

      int diff = 0, l = 0, r = 0;
      for (int i = 0; i < n; i++)
      {
            int cnt_greater = 0, cnt_less = 0;
            for (int j = i + 1; j < n; j++)
            {
                  cnt_greater += (a[j] > a[i]);
                  cnt_less += (a[j] < a[i]);
                  if (diff > cnt_greater - cnt_less)
                  {
                        diff = cnt_greater - cnt_less;
                        l = i, r = j;
                  }
            }
      }
      cout << l + 1 << " " << r + 1 << '\n';
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