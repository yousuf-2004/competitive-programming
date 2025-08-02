#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

pair<int, int> f(int n)
{
      int x = 0, y = 0;
      int multi = 1;
      bool flag = true;

      while (n > 0)
      {
            int a = n % 10;
            n /= 10;
            int b, c;
            if (a % 2 == 0)
            {
                  b = c = a / 2;
            }
            else
            {
                  if (flag)
                  {
                        b = (a + 1) / 2;
                        c = (a - 1) / 2;
                  }
                  else
                  {
                        b = (a - 1) / 2;
                        c = (a + 1) / 2;
                  }
                  flag = !flag;
            }
            x += b * multi;
            y += c * multi;
            multi *= 10;
      }
      return {x, y};
}
void solve()
{
      int n;
      cin >> n;
      pair<int, int> result = f(n);
      cout << result.first << " " << result.second << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}