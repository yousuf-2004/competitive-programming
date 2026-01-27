#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1e7 + 9;
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
}
void solve()
{
      int n;
      cin >> n;
      int ans = 0;
      for (auto a : primes)
      {
            int b = n - a;
            if (a > n)
            {
                  break;
            }
            if (is_prime[b] && a <= b)
            {
                  ans++;
            }
      }
      cout << ans << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      sieve();
      primes.clear();
      for (int i = 0; i < N; i++)
      {
            if (is_prime[i])
            {
                  primes.push_back(i);
            }
      }
      int t = 1;
      cin >> t;
      for (int i = 1; i <= t; i++)
      {
            cout << "Case " << i << ": ";
            solve();
      }
      return 0;
}