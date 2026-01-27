#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
const int N = 1e6 + 9;
bool is_prime[N];
vector<int> primes;
void sieve()
{
      is_prime[0] = is_prime[1] = false;
      for (int i = 2; i < N; i++)
      {
            is_prime[i] = true;
      }
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
      int n;
      cin >> n;
      int num_of_div = 1;
      for (auto p : primes)
      {
            if (1ll * p * p > n)
            {
                  break;
            }
            int cnt = 0;
            while (n % p == 0)
            {
                  cnt++;
                  n /= p;
            }
            num_of_div *= (cnt + 1);
      }
      if (n > 1)
      {
            num_of_div *= 2;
      }
      cout << num_of_div - 1 << '\n';
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
            cout << "Case " << i << ": ";
            solve();
      }
      return 0;
}