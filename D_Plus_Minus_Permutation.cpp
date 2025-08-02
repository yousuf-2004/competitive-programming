#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int total_sum(int n)
{
      return (n * (n + 1)) / 2;
}
void solve()
{
      int n, x, y;
      cin >> n >> x >> y;
      int a = n / x;
      int b = n / y;
      int lcm = (x * y) / __gcd(x, y);
      int c = n / lcm;
      int a1 = a - c;
      int b1 = b - c;
      cout << total_sum(n) - total_sum(n - a1) - total_sum(b1) << '\n';
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