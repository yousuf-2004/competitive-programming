#include <bits/stdc++.h>

using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
bool cmp(pair<long long int, long long int> a, pair<long long int, long long int> b)
{
      long long int x1 = a.first;
      long long int y1 = a.second;
      long long int x2 = b.first;
      long long int y2 = b.second;

      return (x1 < x2) || (x1 == x2 && y1 > y2);
}

void solve()
{
      vector<pair<int, int>> v;
      int n;
      cin >> n;
      for (int i = 0; i < n; i++)
      {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
      }
      sort(v.begin(), v.end(), cmp);
      for (auto it = v.begin(); it != v.end(); it++)
      {
            cout << it->first << " " << it->second << '\n';
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