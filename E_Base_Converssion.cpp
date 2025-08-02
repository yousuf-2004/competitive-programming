#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
void base(int n)
{
      if (n == 0)
      {
            return;
      }
      base(n / 2);
      cout << n % 2;
}
void solve()
{
      int n;
      cin >> n;
      base(n);
      cout << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}