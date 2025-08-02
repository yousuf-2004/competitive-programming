#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

const int N = 1e6 + 5;
int sum[N];

void sum_of_divisor()
{
      for (int i = 1; i < N; i++)
      {
            for (int j = i; j < N; j += i)
            {
                  sum[j] += i;
            }
      }
}
bool isPrime(int n)
{
      if (n == 1)
            return false;
      for (int i = 2; i * i <= n; i++)
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
      int a, b;
      cin >> a >> b;
      int cnt = 0;
      for (int i = a; i <= b; i++)
      {
            int val = sum[i];
            if (isPrime(val))
            {
                  cnt++;
            }
      }
      cout << cnt << '\n';
}

signed main()
{
      ios::sync_with_stdio(false);
      cin.tie(0);

      sum_of_divisor(); // Run once before processing test cases

      int t = 1;
      cin >> t;
      while (t--)
            solve();

      return 0;
}
