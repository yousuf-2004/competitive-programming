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
      string s;
      cin >> s;
      vector<tuple<int, int, char>> v;
      int cnt = 0;
      for (int i = 0; i < s.size(); i++)
      {
            v.push_back({cnt, -i, s[i]});
            if (s[i] == '(')
            {
                  cnt++;
            }
            if (s[i] == ')')
            {
                  cnt--;
            }
      }
      sort(v.begin(), v.end());
      for (auto a : v)
      {
            cout << get<2>(a);
      }
      cout << '\n';
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