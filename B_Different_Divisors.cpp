#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int next_prime(int n)
{
      for (int i = n;; i++)
      {
            bool isprime = true;
            for (int j = 2; j * j <= i; j++)
            {
                  if (i % j == 0)
                  {
                        isprime = false;
                        break;
                  }
            }
            if (isprime)
            {
                  return i;
            }
      }
}
void solve()
{
      int n;
      cin >> n;
      int p = next_prime(n + 1);
      int q = next_prime(n + p);
      int ans = min(1ll * p * p * p, 1ll * p * q);
      cout << ans << '\n';
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