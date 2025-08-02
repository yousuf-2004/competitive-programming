#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;

        If you see a good move, look for a better one;
*/

void solve()
{
      int n;
      cin >> n;
      int cnt = 1;
      vector<int> v;
      while (n)
      {
            int x = n % 10;
            if (x)
            {
                  v.push_back(x * cnt);
            }
            cnt *= 10;
            n /= 10;
      }
      cout << v.size() << endl;
      for (auto x : v)
      {
            cout << x << " ";
      }
      cout << endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}