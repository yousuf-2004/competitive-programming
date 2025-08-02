#include <bits/stdc++.h>
// #define int long long
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
      s = "0" + s;

      int n = s.size();
      int k = n;

      for (int i = n - 1; i >= 0; i--)
      {
            if (s[i] >= '5')
            {
                  s[i] = '0';
                  k = i;
                  int j = i - 1;

                  while (s[j] == '9')
                  {
                        s[j] = '0';
                        j--;
                  }
                  s[j]++;
            }
      }
      for (int i = k; i < n; i++)
      {
            s[i] = '0';
      }
      if (s[0] == '0')
      {
            s = s.substr(1);
      }
      cout << s << "\n";
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}