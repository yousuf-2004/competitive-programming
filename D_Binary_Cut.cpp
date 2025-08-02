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
      int n = s.length();
      int cnt = 1;
      bool found = false;
      for (int i = 0; i < n - 1; i++)
      {
            cnt += (s[i] != s[i + 1]);
            found |= (s[i] == '0' && s[i + 1] == '1');
      }
      cout << cnt - found << endl;
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}