#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int power(int base, int exp, int mod)
{
      int result = 1 % mod;
      while (exp > 0)
      {
            if (exp & 1)
                  result = 1ll * result * base % mod;
            base = 1ll * base * base % mod;
            exp >>= 1;
      }
      return result;
}

int leading_3(int n, int k)
{
      double p = k * log10(n);
      double q = p - floor(p);
      double x = pow(10, q);
      return floor(x * 100);
}

int trailing_3(int n, int k)
{
      return power(n, k, 1000);
}

string format(int x)
{
      string x_str = to_string(x);
      while (x_str.size() < 3)
      {
            x_str.insert(x_str.begin(), '0');
      }
      return x_str;
}

void solve()
{
      int n, k;
      cin >> n >> k;
      cout << format(leading_3(n, k)) << "..." << format(trailing_3(n, k)) << '\n';
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}