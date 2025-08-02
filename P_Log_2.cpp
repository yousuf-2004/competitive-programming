#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
int log2(int n)
{
      if (n == 1)
            return 0;
      return 1 + log2(n / 2);
}
void solve()
{
      int n;
      cin >> n;
      cout << log2(n) << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}