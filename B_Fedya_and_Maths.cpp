#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 5;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
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

void solve()
{
      string n;
      cin >> n;
      int len = n.size();
      int k = (len > 1 ? n[len - 2] - '0' : 0) * 10 + (n[len - 1] - '0');

      if (k % 4 == 0)
      {
            cout << "4\n";
      }
      else
      {
            cout << "0\n";
      }
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