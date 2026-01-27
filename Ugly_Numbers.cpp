#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
int power(int a, int x)
{
      int res = 1;
      while (x--)
            res *= a;
      return res;
}

void solve()
{
      vector<int> v;

      for (int a = 0; a <= 30; a++)
      {
            for (int b = 0; b <= 20; b++)
            {
                  for (int c = 0; c <= 15; c++)
                  {
                        int sum = 1;
                        if (a > 0)
                              sum *= power(2, a);
                        if (b > 0)
                              sum *= power(3, b);
                        if (c > 0)
                              sum *= power(5, c);
                        if (sum > 0)
                              v.push_back(sum);
                  }
            }
      }

      sort(v.begin(), v.end());
      cout << "The 1500'th ugly number is " << v[1500 - 1] << ".\n";
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