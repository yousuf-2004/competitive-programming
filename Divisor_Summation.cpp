#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
      int n;
      cin >> n;
      vector<int> divs;
      for (int i = 1; i * i <= n; i++)
      {
            if (n % i == 0)
            {
                  divs.push_back(i);
                  if (i != n / i)
                  {
                        divs.push_back(n / i);
                  }
            }
      }
      int sum = 0;
      for (int i = 0; i < divs.size(); i++)
      {
            if (n != divs[i])
            {
                  sum += divs[i];
            }
      }
      cout << sum << '\n';
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
