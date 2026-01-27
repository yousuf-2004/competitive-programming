#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 2e5 + 10;
vector<vector<int>> pfac(N + 1);
void solve()
{
      int n;
      cin >> n;
      vector<int> a(n), b(n);
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for (int i = 0; i < n; i++)
      {
            cin >> b[i];
      }
      int ans = 2;
      map<int, int> cnt;
      for (int i = 0; i < n; i++)
      {
            for (int x : pfac[a[i]])
            {
                  if (cnt[x] > 0)
                  {
                        ans = 0;
                  }
                  cnt[x]++;
            }
      }

      for (int i = 0; i < n; i++)
      {
            for (int x : pfac[a[i]])
            {
                  cnt[x]--;
            }

            for (int x : pfac[a[i] + 1])
            {
                  if (cnt[x] > 0)
                  {
                        ans = min(ans, 1ll);
                  }
            }

            for (int x : pfac[a[i]])
            {
                  cnt[x]++;
            }
      }

      cout << ans << "\n";
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      for (int i = 2; i <= N; i++)
      {
            if (!pfac[i].empty())
                  continue;

            for (int j = i; j <= N; j += i)
                  pfac[j].push_back(i);
      }
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}