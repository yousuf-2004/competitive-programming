#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1000003;
const int MAX = 1000002;
int cs = 0;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
vector<int> fact(MAX), inv_fact(MAX);

int power(int n, int k)
{
      int ans = 1 % mod;
      while (k > 0)
      {
            if (k & 1)
            {
                  ans = 1ll * ans * n % mod;
            }
            n = 1ll * n * n % mod;
            k >>= 1;
      }
      return ans;
}

void precompute()
{
      fact[0] = 1;
      for (int i = 1; i < MAX; i++)
      {
            fact[i] = fact[i - 1] * i % mod;
      }
      inv_fact[MAX - 1] = power(fact[MAX - 1], mod - 2);
      for (int i = MAX - 2; i >= 0; i--)
      {
            inv_fact[i] = inv_fact[i + 1] * (i + 1) % mod;
      }
}

int nCk(int n, int k)
{
      if (k < 0 || k > n)
            return 0;
      return fact[n] * inv_fact[k] % mod * inv_fact[n - k] % mod;
}

void solve()
{
      int n, k;
      cin >> n >> k;
      cout << "Case " << ++cs << ": " << nCk(n, k) << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      precompute();
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}