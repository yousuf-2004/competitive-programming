#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int n, m;
      cin >> n >> m;
      vector<string> a(m), b(m);
      for (int i = 0; i < m; i++)
      {
            cin >> a[i] >> b[i];
      }
      vector<string> s(n);
      for (int i = 0; i < n; i++)
      {
            cin >> s[i];
      }
      for (const string &str : s)
      {
            for (int i = 0; i < m; i++)
            {
                  if (str == a[i] || str == b[i])
                  {
                        if (a[i].size() == b[i].size())
                        {
                              cout << str << " ";
                        }
                        else
                        {
                              (a[i].size() < b[i].size()) ? cout << a[i] << " " : cout << b[i] << " ";
                        }
                  }
            }
      }
      cout << endl;
}

int main()
{
      solve();
}