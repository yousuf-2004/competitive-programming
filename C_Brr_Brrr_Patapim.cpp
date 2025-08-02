/* #include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

/*void solve()
{
      int n;
      cin >> n;
      vector<vector<int>> G(n, vector<int>(n));
      for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                  cin >> G[i][j];

      vector<int> p(2 * n + 1);
      for (int k = 2; k <= 2 * n; k++)
      {
            int i, j;
            if (k - 1 < n)
            {
                  i = 0;
                  j = k - 2;
            }
            else
            {
                  i = k - n - 1;
                  j = n - 1;
            }
            p[k] = G[i][j];
      }

      vector<bool> seen(2 * n + 1, false);
      for (int k = 2; k <= 2 * n; k++)
            seen[p[k]] = true;

      for (int x = 1; x <= 2 * n; x++)
      {
            if (!seen[x])
            {
                  p[1] = x;
                  break;
            }
      }

      for (int k = 1; k <= 2 * n; k++)
      {
            cout << p[k] << (k == 2 * n ? '\n' : ' ');
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
} */
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
      int a[2 * n];
      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < n; j++)
            {
                  int x;
                  cin >> x;
                  a[i + j + 1] = x;
            }
      }
      a[0] = 2 * n * (2 * n + 1) / 2 - accumulate(a + 1, a + 2 * n, 0ll);
      for (auto v : a)
      {
            cout << v << " ";
      }
      cout << '\n';
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