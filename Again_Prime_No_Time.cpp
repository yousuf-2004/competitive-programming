#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1e4 + 9;
bool is_prime[N];
vector<int> primes;
void sieve()
{
      for (int i = 2; i <= N; i++)
      {
            is_prime[i] = true;
      }
      is_prime[0] = is_prime[1] = false;
      for (int i = 2; i * i < N; i++)
      {
            if (is_prime[i])
            {
                  for (int j = i * i; j < N; j += i)
                  {
                        is_prime[j] = false;
                  }
            }
      }
      for (int i = 2; i < N; i++)
      {
            if (is_prime[i])
            {
                  primes.push_back(i);
            }
      }
}
void solve()
{
      int m, n;
      cin >> m >> n;
      int ans = 1e9;
      for (int p : primes)
      {
            if (p > m)
            {
                  break;
            }
            if (m % p == 0)
            {
                  int cnt = 0;
                  while (m % p == 0)
                  {
                        cnt++;
                        m /= p;
                  }
                  int e = 0;
                  for (int i = 1; i <= n; i++)
                  {
                        int x = i;
                        if (x % p == 0)
                        {
                              while (x % p == 0)
                              {
                                    e++;
                                    x /= p;
                              }
                        }
                  }
                  ans = min(ans, e / cnt);
            }
      }
      if (ans == 0)
      {
            cout << "Impossible to divide\n";
      }
      else
      {
            cout << ans << '\n';
      }
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      sieve();
      int t = 1;
      cin >> t;
      for (int i = 1; i <= t; i++)
      {
            cout << "Case " << i << ":\n";
            solve();
      }
      return 0;
}