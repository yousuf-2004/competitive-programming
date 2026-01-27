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
      int n, w;
      cin >> n >> w;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
            cin >> v[i];
      }
      map<int, int> mp;
      for (int i = 0; i < n; i++)
      {
            mp[v[i]]++;
      }
      int ans = 0;

      while (!mp.empty())
      {
            int temp = w;
            auto it = mp.end();
            --it;

            while (true)
            {
                  if (it->first <= temp)
                  {
                        int width = it->first;
                        int cnt = it->second;
                        int k = temp / width;
                        int use = min(k, cnt);
                        temp -= use * width;
                        mp[width] -= use;

                        if (mp[width] == 0)
                        {
                              if (it == mp.begin())
                              {
                                    mp.erase(width);
                                    break;
                              }
                              else
                              {
                                    auto a = it;
                                    --it;
                                    mp.erase(a);
                              }
                        }
                        else
                        {
                              if (it == mp.begin())
                              {
                                    break;
                              }
                              --it;
                        }
                  }
                  else
                  {
                        if (it == mp.begin())
                        {
                              break;
                        }
                        --it;
                  }
            }
            ans++;
      }

      cout << ans << "\n";
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