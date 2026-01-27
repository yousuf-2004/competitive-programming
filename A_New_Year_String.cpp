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
      if (s.find("2026") != string::npos)
      {
            cout << 0 << "\n";
      }
      else if (s.find("2025") == string::npos)
      {
            cout << 0 << "\n";
      }
      else
      {
            cout << 1 << "\n";
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