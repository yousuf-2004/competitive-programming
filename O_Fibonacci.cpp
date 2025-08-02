#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
int fibonacci(int n)
{
      if (n <= 2)
            return n - 1;
      return fibonacci(n - 1) + fibonacci(n - 2);
}
void solve()
{
      int n;
      cin >> n;
      cout << fibonacci(n) << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}