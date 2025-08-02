#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistent;

        Stay Hungry;

        If you see a good move, look for a better one;
*/
int number_of_ways(int s, int e)
{
      if (s == e)
      {
            return 1;
      }
      if (s > e)
      {
            return 0;
      }

      int ans = 0;
      for (int i = 1; i <= 3; i++)
      {
            ans += number_of_ways(s + i, e);
      }
      return ans;
}

void solve()
{
      int s, e;
      cin >> s >> e;
      cout << number_of_ways(s, e) << '\n';
}

signed main()
{
      int t = 1;
      // cin >> t;
      while (t--)
            solve();
      return 0;
}
