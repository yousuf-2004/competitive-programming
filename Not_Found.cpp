#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

void solve()
{
      string s;
      cin >> s;
      vector<int> v(26, 0);
      for (int i = 0; i < s.size(); i++)
      {
            v[s[i] - 'a']++;
      }
      for (char ch = 'a'; ch <= 'z'; ch++)
      {
            if (v[ch - 'a'] == 0)
            {
                  cout << ch << endl;
                  return;
            }
      }
      cout << "None" << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}