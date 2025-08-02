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

      bool is_palindrome = 1;
      int cnt_0 = 0;
      for (int i = 0; i < n; i++)
      {
            cnt_0 += s[i] == '0';
      }
      
      if (cnt_0 == 1)
      {
            cout << "BOB\n";
            return;
      }
      if (cnt_0 % 2)
      {
            cout << "ALICE\n";
            return;
      }
      cout << "BOB\n";
      return;
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