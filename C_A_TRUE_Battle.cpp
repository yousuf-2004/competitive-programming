#include <bits/stdc++.h>
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
      vector<int> v(n, 0);
      for (int i = 0; i < n; i++)
      {
            if (s[i] == '1')
            {
                  v[i] = 1;
            }
      }
      bool ans = false;
      if (v[0] || v[n - 1])
      {
            ans = true;
      }
      for (int i = 1; i < n; i++)
      {
            if (v[i] && v[i - 1])
            {
                  ans = true;
            }
      }
      if (ans)
      {
            cout << "YES" << endl;
      }
      else
      {
            cout << "NO" << endl;
      }
}

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            solve();
      }
      return 0;
}