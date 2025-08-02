#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
void digits(int n)
{
      if (n == 0)
      {
            cout << endl;
            return;
      }
      digits(n / 10);
      cout << n % 10 << " ";
}
void solve()
{
      int n;
      cin >> n;
      digits(n);
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}