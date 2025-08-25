#include <bits/stdc++.h>
#define int long long
using namespace std;
int tc = 0;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int n;
      cin >> n;
      vector<int> v(n);
      priority_queue<pair<int, int>> q;
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
            q.push({v[i], i});
      }

      int Q;
      cin >> Q;
      while (Q--)
      {
            int m;
            cin >> m;
            while (!q.empty())
            {
                  auto [x, i] = q.top();
                  if (x < m)
                        break;
                  q.pop();
                  q.push({x % m, i});
            }
      }
      cout << "Case " << ++tc << ":\n";
      while (!q.empty())
      {
            auto [x, i] = q.top();
            q.pop();
            v[i] = x;
      }

      for (int i = 0; i < n; i++)
      {
            cout << v[i] << (i < n - 1 ? ' ' : '\n');
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