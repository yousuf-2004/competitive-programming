#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int n;
const int MAX = 2e7 + 9;
bool f(int x)
{
      int div = x;
      int sum = 0;
      while (div > 0)
      {
            sum += (div % 10);
            div /= 10;
      }
      return sum == 10;
}
void solve()
{
      cin >> n;
      int cnt = 0;
      for (int i = 0; i < MAX; i++)
      {
            if (f(i))
            {
                  cnt++;
            }
            if (cnt == n)
            {
                  cout << i << '\n';
                  break;
            }
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