#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

vector<int> p;

vector<int> primes(int maxN)
{
      vector<bool> isPrime(maxN + 1, true);
      isPrime[0] = isPrime[1] = false;

      for (int i = 2; i * i <= maxN; i++)
      {
            if (isPrime[i])
            {
                  for (int j = i * i; j <= maxN; j += i)
                        isPrime[j] = false;
            }
      }
      vector<int> resPrimes;
      for (int i = 2; i <= maxN; i++)
      {
            if (isPrime[i])
                  resPrimes.push_back(i);
      }
      return resPrimes;
}

void solve()
{
      int n;
      cin >> n;

      long long g = 0;
      for (int i = 0; i < n; i++)
      {
            long long x;
            cin >> x;
            if (i == 0)
                  g = x;
            else
                  g = __gcd(g, x);
      }

      bool found = false;
      for (int prime : p)
      {
            if (g % prime != 0)
            {
                  cout << prime << '\n';
                  found = true;
                  break;
            }
      }
      if (!found)
      {
            cout << -1 << '\n';
      }
}

int main()
{
      ios::sync_with_stdio(false);
      cin.tie(nullptr);

      p = primes(100000);
      int t;
      cin >> t;
      while (t--)
      {
            solve();
      }

      return 0;
}
