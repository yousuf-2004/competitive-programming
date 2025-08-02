#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
bool can_reach(int n)
{
      if (n == 1)
      {
            return true;
      }
      if (n % 10 == 0)
      {
            if (can_reach(n / 10))
            {
                  return true;
            }
      }
      if (n % 20 == 0)
      {
            if (can_reach(n / 20))
            {
                  return true;
            }
      }
      return false;
}
void solve()
{
      int n;
      cin >> n;
      if (can_reach(n))
      {
            cout << "YES" << endl;
      }
      else
      {
            cout << "NO" << endl;
      }
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}