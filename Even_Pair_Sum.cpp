#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int a, b;
      cin >> a >> b;
      int even_a = a / 2;
      int odd_a = a - even_a;
      int even_b = b / 2;
      int odd_b = b - even_b;
      cout << (even_a * even_b) + (odd_a * odd_b) << "\n";
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