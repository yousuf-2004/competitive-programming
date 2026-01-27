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
      int n, k;
      cin >> n >> k;
      map<int, int> freq;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
            freq[v[i]]++;
      }

      bool ok = true;
      for (auto &it : v)
      {
            if (freq[it] % k != 0)
            {
                  ok = false;
                  break;
            }
      }
      if (!ok)
      {
            cout << "0\n";
            return;
      }

      map<int, int> mp;
      int r = -1;
      int ans = 0;
      for (int l = 0; l < n; l++)
      {
            while (r < n - 1)
            {
                  if (mp[v[r + 1]] < freq[v[r + 1]] / k)
                  {
                        mp[v[r + 1]]++;
                        r++;
                  }
                  else
                  {
                        break;
                  }
            }
            ans += (r - l + 1);
            mp[v[l]]--;
      }
      cout << ans << '\n';
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

//TC=>O(nlogn) for map if unodered_map is used It will be O(n)