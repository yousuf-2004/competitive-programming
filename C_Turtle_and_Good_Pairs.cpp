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
      string s;
      cin >> s;

      map<char, int> freq;
      for (char c : s)
      {
            freq[c]++;
      }

      vector<pair<int, char>> v;
      for (auto &p : freq)
      {
            v.push_back({p.second, p.first});
      }
      sort(v.rbegin(), v.rend());

      string ans = "";
      string temp = "";
      for (auto a : v)
      {
            temp += a.second;
      }

      int sum = 0;
      int i = v.size() - 1;
      while (i >= 0)
      {
            int baki = v[i].first - sum;
            for (int j = 0; j < baki; j++)
            {
                  ans += temp;
            }
            sum += baki;
            temp.pop_back();
            i--;
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