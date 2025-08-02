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
      int n, q;
      cin >> n >> q;
      vector<int> v(n + 1);
      for (int i = 1; i <= n; i++)
      {
            cin >> v[i];
      }
      int sum = 0;
      map<int, int> mp;
      for (int i = 1; i <= n; i++)
      {
            mp[i] = v[i];
            sum += v[i];
      }

      int def = 0;
      while (q--)
      {
            int x;
            cin >> x;
            if (x == 1)
            {
                  int pos, num;
                  cin >> pos >> num;
                  if (!mp[pos])
                  {
                        mp[pos] = def;
                  }
                  sum -= mp[pos];
                  sum += num;
                  mp[pos] = num;
            }
            else
            {
                  int num;
                  cin >> num;
                  mp.clear();
                  sum = n * num;
                  def = num;
            }
            cout << sum << '\n';
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}