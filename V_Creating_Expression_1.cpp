#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 22;
int n, x;
vector<int> a(N, 0);
bool found;
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
void expression(int i, int sum)
{
      if (i > n)
      {
            if (sum == x)
            {
                  found = true;
            }
            return;
      }
      expression(i + 1, sum + a[i]);
      expression(i + 1, sum - a[i]);
}
void solve()
{
      cin >> n >> x;
      for (int i = 1; i <= n; i++)
      {
            cin >> a[i];
      }
      found = false;
      expression(2, a[1]);
      if (found)
      {
            cout << "YES";
      }
      else
      {
            cout << "NO";
      }
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}