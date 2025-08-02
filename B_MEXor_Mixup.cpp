#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int xor_till(int n)
{
      int cnt = n % 4;
      if (cnt == 0)
      {
            return n;
      }
      else if (cnt == 1)
      {
            return 1;
      }
      else if (cnt == 2)
      {
            return n + 1;
      }
      else
      {
            return 0;
      }
}
void solve()
{
      int a, b;
      cin >> a >> b;
      int arr_xor = xor_till(a - 1);
      if (arr_xor == b)
      {
            cout << a << '\n';
      }
      else if ((arr_xor ^ b) != a)
      {
            cout << a + 1 << '\n';
      }
      else
      {
            cout << a + 2 << '\n';
      }
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