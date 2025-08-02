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
      while (!s.empty() && s.back() == '0')
      {
            s.pop_back();
      }
      if (!s.empty())
      {
            s.pop_back();
      }
      cout << s << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}