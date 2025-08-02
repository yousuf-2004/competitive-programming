#include <bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int n, q;
      cin >> n >> q;
      vector<int> a(n), x(q);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < q; i++)
      {
            cin >> x[i];
      }
      vector<vector<int>> div(31);

      vector<int> done(n);

      for (int b = 30; b >= 0; b--)
      {
            for (int i = 0; i < n; i++)
            {
                  if (done[i])
                  {
                        continue;
                  }

                  if ((a[i] % (1 << b)) == 0)
                  {
                        done[i] = 1;
                        div[b].pb(i);
                  }
            }
      }

      for (auto e : x)
      {
            for (int b = e; b <= 30; b++)
            {
                  for (auto i : div[b])
                  {
                        div[e - 1].pb(i);
                        a[i] += (1 << (e - 1));
                  }

                  div[b].clear();
            }
      }

      for (auto &e : a)
            cout << e << " ";
      cout << "\n";
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}