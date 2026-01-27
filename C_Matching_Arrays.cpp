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
      int n, x;
      cin >> n >> x;
      vector<int> a(n), b(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> b[i];
      }

      vector<pair<int, int>> v;
      for (int i = 0; i < n; i++)
      {
            v.push_back({a[i], i});
      }

      sort(v.begin(), v.end());
      sort(b.begin(), b.end());

      vector<int> ans(n);
      int f = 1;
      for (int i = x; i > 0; i--)
      {
            ans[v[n - i].second] = b[x - i];
            f &= (ans[v[n - i].second] < a[v[n - i].second]);
      }

      for (int i = x + 1, j = 0; i <= n; i++, j++)
      {
            ans[v[j].second] = b[x + j];
            f &= (ans[v[j].second] >= a[v[j].second]);
      }
      if (f)
      {
            cout << "YES\n";
            for (auto a : ans)
            {
                  cout << a << ' ';
            }
            cout << '\n';
      }
      else
      {
            cout << "NO\n";
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