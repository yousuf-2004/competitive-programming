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
      set<string> se;
      while (cin >> s)
      {
            string word = "";
            int n = s.size();
            for (int i = 0; i < n; i++)
            {
                  if (isalpha(s[i]))
                  {
                        word += tolower(s[i]);
                  }
                  else
                  {
                        if (!word.empty())
                        {
                              se.insert(word);
                        }
                        word = "";
                  }
            }
            if (!word.empty())
            {
                  se.insert(word);
            }
      }
      for (auto a : se)
      {
            cout << a << '\n';
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