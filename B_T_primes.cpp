#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
bool is_prime[10000009];
void sieve()
{
      int maxN = 1e6 + 9;
      for (int i = 2; i <= maxN; i++)
      {
            is_prime[i] = true;
      }
      is_prime[1] = false;
      for (int i = 2; i * i <= maxN; i++)
      {
            if (is_prime[i])
            {
                  for (int j = i * i; j <= maxN; j += i)
                  {
                        is_prime[j] = false;
                  }
            }
      }
}
void solve()
{
      int n;
      cin >> n;
      while (n--)
      {
            int x;
            cin >> x;
            int m = sqrtl(x);
            if (1ll * m * m > x)
            {
                  m--;
            }
            if (1ll * m * m < x)
            {
                  m++;
            }
            if (1ll * m * m == x)
            {
                  if (is_prime[m])
                  {
                        cout << "YES\n";
                  }
                  else
                  {
                        cout << "NO\n";
                  }
            }
            else
            {
                  cout << "NO\n";
            }
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      sieve();
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}