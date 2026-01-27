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
      int n, m, l;
      cin >> n >> m >> l;

      vector<tuple<int, int, int>> v;

      for (int i = 0; i < n; i++)
      {
            int x, y;
            cin >> x >> y;
            v.emplace_back(x, y, 1);
      }

      for (int i = 0; i < m; i++)
      {
            int x, y;
            cin >> x >> y;
            v.emplace_back(x, y, 0);
      }

      sort(v.begin(), v.end());

      int k = 1;
      priority_queue<int> pq;

      bool ok = true;

      for (auto &[a, b, t] : v)
      {
            if (t == 0)
            {
                  pq.push(b);
            }
            else
            {
                  while (!pq.empty() && k < b - a + 2)
                  {
                        k += pq.top();
                        pq.pop();
                  }

                  if (k < b - a + 2)
                  {
                        cout << "-1\n";
                        ok = false;
                        break;
                  }
            }
      }

      if (ok)
      {
            cout << m - (int)pq.size() << '\n';
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