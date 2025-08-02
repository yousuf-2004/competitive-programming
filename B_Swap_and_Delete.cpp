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
      vector<int> cnt(2, 0);
      for (char ch : s)
      {
            cnt[ch - '0']++;
      }
      for (int i = 0; i <= s.length(); i++)
      {
            if (i == s.length() || cnt[1 - (s[i] - '0')] == 0)
            {
                  cout << s.length() - i << '\n';
                  break;
            }
            cnt[1 - (s[i] - '0')]--;
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