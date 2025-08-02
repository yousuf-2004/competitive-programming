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
      string s, t;
      cin >> s >> t;
      for (int i = 0; i < n && s[i] == '0'; i++)
      {
            if (t[i] != '0')
            {
                  cout << "NO" << endl;
                  return;
            }
      }
      cout << "YES" << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}