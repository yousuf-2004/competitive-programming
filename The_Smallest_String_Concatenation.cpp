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
      string s[n];
      for (int i = 0; i < n; i++)
      {
            cin >> s[i];
      }
      sort(s, s + n, [](string a, string b)
           { return a + b < b + a; });
      for (int i = 0; i < n; i++)
      {
            cout << s[i];
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