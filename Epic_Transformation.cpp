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
      priority_queue<pair<int, int>> pq;
      for (auto i : mp)
      {
            int val = i.first;
            int cnt = i.second;
            pq.push({cnt, val});
      }
      int ans = n;
      while (pq.size() > 1)
      {
            auto a = pq.top();
            pq.pop();
            auto b = pq.top();
            pq.pop();
            a.first--;
            b.first--;
            ans -= 2;
            if (a.first > 0)
            {
                  pq.push(a);
            }
            if (b.first > 0)
            {
                  pq.push(b);
            }
      }
      cout << ans << endl;
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