#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
int x_or(int x)
{
      int ans = 0;
      while (x >= 0 && x % 4 != 3)
      {
            ans ^= x;
            x--;
      }
      return ans;
}
int main_xor(int a, int b)
{
      return x_or(b) ^ (a > 0 ? x_or(a - 1) : 0);
}
void solve()
{
      int a, b;
      cin >> a >> b;
      int ans = main_xor(a, b);
      cout << ans << endl;
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}