#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
int factorial(int n)
{
      if (n == 0)
            return 1;
      return n * factorial(n - 1);
}
bool is_curious(int n)
{
      int m = n;
      int sum = 0;
      while (n)
      {
            sum += factorial(n % 10);
            n /= 10;
      }
      return sum % m == 0;
}
void solve()
{
      int n;
      cin >> n;
      int sum = 0;
      for (int i = 10; i <= n; i++)
      {
            if (is_curious(i))
                  sum += i;
      }
      cout << sum << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}