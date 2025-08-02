#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      string p, s;
      cin >> p >> s;
      vector<int> v1, v2;
      if (p[0] != s[0])
      {
            cout << "NO\n";
            return;
      }
      p = '.' + p;
      s = '.' + s;
      for (int i = 1; i < p.size(); i++)
      {
            if (p[i] == p[i - 1])
            {
                  v1.back()++;
            }
            else
            {
                  v1.push_back(1);
            }
      }
      for (int i = 1; i < s.size(); i++)
      {
            if (s[i] == s[i - 1])
            {
                  v2.back()++;
            }
            else
            {
                  v2.push_back(1);
            }
      }
      if (v1.size() != v2.size())
      {
            cout << "NO\n";
            return;
      }
      for (int i = 0; i < v1.size(); i++)
      {
            if (v2[i] < v1[i] || v2[i] > 2 * v1[i])
            {
                  cout << "NO\n";
                  return;
            }
      }
      cout << "YES\n";
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