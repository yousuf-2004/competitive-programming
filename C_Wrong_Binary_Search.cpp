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
      vector<int> p(n);
      iota(p.begin(), p.end(), 1);

      int l = 0;
      while (l < n)
      {
            if (s[l] == '1')
            {
                  l++;
                  continue;
            }

            int r = l;
            while (r + 1 < n && s[r + 1] == '0')
            {
                  r++;
            }

            if (r - l + 1 == 1)
            {
                  cout << "NO\n";
                  return;
            }

            for (int i = l; i < r; i++)
            {
                  p[i] = i + 2;
            }
            p[r] = l + 1;

            l = r + 1;
      }

      cout << "YES\n";
      for (int i = 0; i < n; i++)
            cout << p[i] << " ";
      cout << "\n";
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