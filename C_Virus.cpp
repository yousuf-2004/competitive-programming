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
      int n, m;
      cin >> n >> m;
      vector<int> a(m);
      for (int i = 0; i < m; i++)
      {
            cin >> a[i];
      }
      sort(a.begin(), a.end());

      vector<int> diff;
      for (int i = 0; i < m - 1; i++)
      {
            diff.push_back(a[i + 1] - a[i] - 1);
      }
      diff.push_back(a[0] + n - a[m - 1] - 1);
      sort(diff.rbegin(), diff.rend());

      int corona = 0, safe = 0;

      for (int i = 0; i < diff.size(); i++)
      {
            int cur = diff[i];
            cur -= corona * 2;
            if (cur <= 0)
            {
                  break;
            }
            safe += (cur - 1);
            if (cur == 1)
            {
                  safe++;
            }
            corona += 2;
      }

      cout << n - safe << '\n';
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