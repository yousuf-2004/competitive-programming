#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1073741824; // 2^30
const int N = 1e6 + 5;
vector<int> divisors(N, 0);

/*
        Yousuf Ibrahim

        Be Consistent;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

void precompute_divisors()
{
      for (int i = 1; i < N; i++)
      {
            for (int j = i; j < N; j += i)
            {
                  divisors[j]++;
            }
      }
}

void solve()
{
      int a, b, c;
      cin >> a >> b >> c;

      int sum = 0;
      for (int i = 1; i <= a; i++)
      {
            for (int j = 1; j <= b; j++)
            {
                  for (int k = 1; k <= c; k++)
                  {
                        int num = i * j * k;
                        sum = (sum + divisors[num]) % MOD;
                  }
            }
      }

      cout << sum << endl;
}

signed main()
{
      ios::sync_with_stdio(false);
      cin.tie(0);

      precompute_divisors();

      int t = 1;
      // cin >> t;
      while (t--)
            solve();

      return 0;
}
