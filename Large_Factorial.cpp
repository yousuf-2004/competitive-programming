#include <bits/stdc++.h>
#define int long long
using namespace std;

int mod = 1e9 + 7;

const int N = 1e5 + 5;

vector<int> fact(N, -1);
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
int factor(int n)
{
      if (n == 0)
            return 1;
      if (fact[n] != -1)
            return fact[n];
      return fact[n] = (n * factor(n - 1)) % mod;
}
void solve()
{
      int n;
      cin >> n;
      cout << factor(n) << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}