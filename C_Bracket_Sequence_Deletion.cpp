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
      string s;
      cin >> n >> s;
      int l = 0;
      int cnt = 0;
      while (l + 1 < n)
      {
            if (s[l] == '(' || (s[l] == ')' && s[l + 1] == ')'))
            {
                  l += 2;
            }
            else
            {
                  int r = l + 1;
                  while (r < n && s[r] != ')')
                  {
                        ++r;
                  }
                  if (r == n)
                  {
                        break;
                  }
                  l = r + 1;
            }
            ++cnt;
      }
      cout << cnt << ' ' << n - l << '\n';
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