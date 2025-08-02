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
      vector<int> x(n), y(n);
      for (int i = 0; i < n; i++)
      {
            cin >> x[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> y[i];
      }

      vector<pair<int, int>> dif(n);
      for (int i = 0; i < n; i++)
      {
            dif[i].first = y[i] - x[i];
            dif[i].second = i;
      }

      sort(dif.rbegin(), dif.rend());

      int j = n - 1, cnt = 0;
      for (int i = 0; i < n; i++)
      {
            while (j > i && dif[i].first + dif[j].first < 0)
            {
                  j--;
            }
            if (j <= i)
            {
                  break;
            }
            cnt++;
            j--;
      }
      cout << cnt << "\n";
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