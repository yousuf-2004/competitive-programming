#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int mod = 1e9 + 7;

void solve()
{
      int n;
      cin >> n;
      vector<bool> isPrime(n + 1, true);
      isPrime[0] = isPrime[1] = false;

      for (int i = 2; i * i <= n; i++)
            if (isPrime[i])
                  for (int j = i * i; j <= n; j += i)
                        isPrime[j] = false;

      int ans = 1;
      for (int p = 2; p <= n; p++)
      {
            if (!isPrime[p])
                  continue;

            int exp = 0;
            int power = p;

            while (power <= n)
            {
                  exp += n / power;
                  power *= p;
            }

            ans = (ans * (exp + 1)) % mod;
      }

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