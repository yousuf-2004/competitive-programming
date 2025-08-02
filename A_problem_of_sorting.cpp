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
      cin.ignore();
      vector<pair<int, string>> v;
      for (int i = 0; i < n; i++)
      {
            string s;
            getline(cin, s);
            int len = s.size();
            string birth_year = s.substr(len - 4);
            int year = stoi(birth_year);
            string name = s.substr(0, len - 5);
            v.push_back({year, name});
      }
      sort(v.rbegin(), v.rend());
      for (auto [a, b] : v)
      {
            cout << b << '\n';
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