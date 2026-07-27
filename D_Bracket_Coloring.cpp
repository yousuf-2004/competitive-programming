#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

bool isRegular(string s)
{
      int bal = 0;
      for (char c : s)
      {
            if (c == '(')
                  bal++;
            else
                  bal--;
            if (bal < 0)
                  return false;
      }
      return bal == 0;
}

void solve()
{
      int n;
      cin >> n;
      string s;
      cin >> s;
      vector<int> bal(n);
      bal[0] = (s[0] == '(' ? 1 : -1);
      for (int i = 1; i < n; i++)
      {
            bal[i] = bal[i - 1] + (s[i] == '(' ? 1 : -1);
      }
      if (bal[n - 1] != 0)
      {
            cout << -1 << '\n';
            return;
      }
      if (*min_element(bal.begin(), bal.end()) == 0)
      {
            cout << 1 << '\n';
            for (int i = 0; i < n; i++)
                  cout << 1 << ' ';
            cout << '\n';
            return;
      }
      else if (*max_element(bal.begin(), bal.end()) == 0)
      {
            cout << 1 << '\n';
            for (int i = 0; i < n; i++)
                  cout << 1 << ' ';
            cout << '\n';
            return;
      }
      vector<int> ans(n);
      for (int i = 0; i < n; i++)
      {
            if (bal[i] > 0)
                  ans[i] = 1;
            else if (bal[i] < 0)
                  ans[i] = 2;
            else
                  ans[i] = (bal[i - 1] > 0 ? 1 : 2);
      }

      cout << 2 << '\n';
      for (int i = 0; i < n; i++)
            cout << ans[i] << ' ';
      cout << '\n';
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