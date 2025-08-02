#include <bits/stdc++.h>
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
      if (is_sorted(s.begin(), s.end()))
      {
            cout << 0 << endl;
            return;
      }
      string s1 = s;
      sort(s.begin(), s.end());
      vector<int> v;
      for (int i = 0; i < n; i++)
      {
            if (s[i] != s1[i])
            {
                  v.push_back(i + 1);
            }
      }
      cout << 1 << endl;
      cout << v.size() << " ";
      for (auto a : v)
      {
            cout << a << " ";
      }
      cout << endl;
}

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            solve();
      }
      return 0;
}