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
      int n, k;
      string s;
      cin >> n >> k;
      cin >> s;
      set<char> se;
      for (char c : s)
      {
            se.insert(c);
      }
      int smallest_char = *(se.begin());
      if (k <= n)
      {
            for (int i = k - 1; i >= 0; i--)
            {
                  auto it = se.upper_bound(s[i]);
                  if (it != se.end())
                  {
                        string ans;
                        ans.resize(k);
                        char next_big_char = *it;
                        ans[i] = next_big_char;
                        for (int j = 0; j < i; j++)
                        {
                              ans[j] = s[j];
                        }
                        for (int j = i + 1; j < k; j++)
                        {
                              ans[j] = smallest_char;
                        }
                        cout << ans << '\n';
                        return;
                  }
            }
      }
      else
      {
            string ans;
            ans.resize(k);
            for (int i = 0; i < n; i++)
            {
                  ans[i] = s[i];
            }
            for (int i = n; i < k; i++)
            {
                  ans[i] = smallest_char;
            }
            cout << ans << '\n';
      }
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