#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9 + 7;
const int MAX = 1e6 + 5;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int fact[MAX];
int a, b, n;
int power(int x, int n)
{
      if (n == 0)
      {
            return 1 % mod;
      }
      int cur = power(x, n / 2) % mod;
      if (n % 2 == 0)
      {
            return 1ll * cur * cur % mod;
      }
      else
      {
            return 1ll * cur * cur % mod * x % mod;
      }
}

int inverse(int b)
{
      return power(b, mod - 2);
}

int combi(int n, int k)
{
      if (k > n)
            return 0;
      int up = fact[n];
      int down = 1ll * fact[k] * fact[n - k] % mod;
      return 1ll * up * inverse(down) % mod;
}

bool is_good(int x)
{
      while (x)
      {
            int digit = x % 10;
            if (digit != a and digit != b)
            {
                  return false;
            }
            x /= 10;
      }
      return true;
}
void solve()
{
      fact[0] = 1;
      for (int i = 1; i < MAX; i++)
      {
            fact[i] = 1ll * fact[i - 1] * i % mod;
      }
      cin >> a >> b >> n;
      int ans = 0;
      for (int k = 0; k <= n; k++)
      {
            int digit_sum = k * a + (n - k) * b;
            if (is_good(digit_sum))
            {
                  int ways = combi(n, k);
                  ans += ways;
                  ans %= mod;
            }
      }
      cout << ans << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}