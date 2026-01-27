#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

const int N = 1e5 + 9;
bool is_prime[N];
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
}
void solve()
{
      int n;
      cin >> n;
      if (n <= 2)
      {
            cout << 1 << '\n';
      }
      else
      {
            cout << 2 << '\n';
      }
      for (int i = 2; i <= n + 1; i++)
      {
            if (!is_prime[i])
            {
                  cout << 2 << ' ';
            }
            else
            {
                  cout << 1 << ' ';
            }
      }
}

signed main()
{
      sieve();
      int t = 1;
      // cin>>t;
      while (t--)
      {
            solve();
      }
}