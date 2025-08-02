#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
void div_con(int n)
{
      if (n == 0)
      {
            return;
      }
      div_con(n - 1);
      cout << char('A' + n - 1);
      div_con(n - 1);
}
void solve()
{
      int n;
      cin >> n;
      div_con(n);
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