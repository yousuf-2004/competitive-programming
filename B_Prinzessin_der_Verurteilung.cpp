#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistent;

        Stay Hungry;
*/

void solve()
{
      int n;
      cin >> n;
      string s;
      cin >> s;

      unordered_set<string> substrings;

      for (int i = 0; i < n; i++)
      {
            string temp = "";
            for (int len = 1; len <= 3 && i + len <= n; len++)
            {
                  temp += s[i + len - 1];
                  substrings.insert(temp);
            }
      }

      for (char c1 = 'a'; c1 <= 'z'; c1++)
      {
            string t = "";
            t += c1;
            if (!substrings.count(t))
            {
                  cout << t << '\n';
                  return;
            }
      }

      for (char c1 = 'a'; c1 <= 'z'; c1++)
      {
            for (char c2 = 'a'; c2 <= 'z'; c2++)
            {
                  string t = "";
                  t += c1;
                  t += c2;
                  if (!substrings.count(t))
                  {
                        cout << t << '\n';
                        return;
                  }
            }
      }

      for (char c1 = 'a'; c1 <= 'z'; c1++)
      {
            for (char c2 = 'a'; c2 <= 'z'; c2++)
            {
                  for (char c3 = 'a'; c3 <= 'z'; c3++)
                  {
                        string t = "";
                        t += c1;
                        t += c2;
                        t += c3;
                        if (!substrings.count(t))
                        {
                              cout << t << '\n';
                              return;
                        }
                  }
            }
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
