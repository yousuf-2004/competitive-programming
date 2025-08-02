#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

void solve()
{
      int n;
      cin >> n;
      int sum = 0;
      int sum_of_squares = 0;
      for (int i = 1; i <= n; i++)
      {
            sum += i;
            sum_of_squares += i * i;
      }
      cout << sum * sum - sum_of_squares << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}