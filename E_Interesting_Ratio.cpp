#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int is_prime[10000001];
void sieve()
{
      int maxN = 1e7;
      for (int i = 1; i <= maxN; i++)
      {
            is_prime[i] = 1;
      }
      is_prime[0] = is_prime[1] = 0;
      for (int i = 2; i * i <= maxN; i++)
      {
            if (is_prime[i])
            {
                  for (int j = i * i; j <= maxN; j += i)
                  {
                        is_prime[j] = 0;
                  }
            }
      }
}

void solve()
{
      int n;
      cin >> n;
      int ans = 0;
      for (int i = 2; i <= n; i++)
      {
            if (is_prime[i] == 1)
            {
                  ans += n / i;
            }
      }
      cout << ans << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      sieve();
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}