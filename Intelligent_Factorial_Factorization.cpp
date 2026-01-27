#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
bool is_prime(int n)
{
      if (n == 1)
            return false;
      for (int i = 2; i < n; i++)
      {
            if (n % i == 0)
            {
                  return false;
            }
      }
      return true;
}

void solve()
{
      int n;
      cin >> n;
      cout << n << " = ";
      for (int p = 1; p <= n; p++)
      {
            if (is_prime(p))
            {
                  int exponent = 0;
                  for (int i = 1; i <= n; i++)
                  {
                        int x = i;
                        while (x % p == 0)
                        {
                              exponent++;
                              x /= p;
                        }
                  }
                  if (p != 2)
                        cout << " * ";
                  cout << p << " (" << exponent << ")";
            }
      }
      cout << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      cin >> t;
      for (int i = 1; i <= t; i++)
      {
            cout << "Case " << i << ": ";
            solve();
      }
      return 0;
}
