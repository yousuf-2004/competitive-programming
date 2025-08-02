#include <bits/stdc++.h>
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
      string a, b;
      cin >> a >> b;
      int n = a.size();
      bool found = false;
      for (int i = 0; i < n; i++)
      {
            if (a[i] != b[i])
            {
                  int position_of_a = 0;
                  for (int j = 0; i < s.size(); j++)
                  {
                        if (s[j] == a[i])
                        {
                              position_of_a = j;
                              break;
                        }
                  }
                  int position_of_b = 0;
                  for (int j = 0; i < s.size(); j++)
                  {
                        if (s[j] == b[i])
                        {
                              position_of_b = j;
                              break;
                        }
                  }
                  if (position_of_a < position_of_b)
                  {
                        cout << "<\n";
                  }
                  else
                  {
                        cout << ">\n";
                  }
                  found = true;
                  break;
            }
      }
      if (!found)
      {
            cout << "=\n";
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