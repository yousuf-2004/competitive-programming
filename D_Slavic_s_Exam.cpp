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
      string s, s1;
      cin >> s >> s1;
      int n = s.size();
      int m = s1.size();
      int i = 0, j = 0;
      while (i < n && j < m)
      {
            if (s[i] == '?' || s[i] == s1[j])
            {
                  s[i] = s1[j];
                  i++;
                  j++;
            }
            else
            {
                  i++;
            }
      }
      if (j != m)
      {
            cout << "NO" << endl;
            return;
      }
      cout << "YES" << endl;
      while (i < n)
      {
            if (s[i] == '?')
            {
                  s[i] = 'a';
            }
            i++;
      }
      cout << s << endl;
}

signed main()
{
      int t;
      cin >> t;
      while (t--)
            solve();
      return 0;
}