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

      int zeros = 0, ones = 0;
      for (char c : s)
      {
            if (c == '0')
                  zeros++;
            else
                  ones++;
      }

      int mark = n - 1;
      bool rev = false; 

      auto get = [&](int i)
      {
            char c = s[i];
            if (rev)
                  c = (c == '0' ? '1' : '0');
            return c;
      };

      while (mark >= 0)
      {
            char sc = get(mark), tc = t[mark];
            if (sc == tc)
            {
                  if (sc == '0')
                        zeros--;
                  else
                        ones--;
                  mark--;
            }
            else
            {
                  if (zeros != ones)
                  {
                        cout << "NO\n";
                        return;
                  }
                  rev = !rev;
                  swap(zeros, ones);
            }
      }

      cout << "YES\n";
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