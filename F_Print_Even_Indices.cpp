#include <bits/stdc++.h>
#define int long long
using namespace std;
const int n = 1009;
vector<int> a(n);
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
void print_even(int i)
{
      if (i < 0)
            return;
      if (i % 2 == 0)
      {
            cout << a[i] << " ";
      }
      print_even(i - 1);
}
void solve()
{
      int n;
      cin >> n;
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      print_even(n - 1);
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}