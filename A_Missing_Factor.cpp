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
      int x=sqrtl(n);
      while(x*x<n){
            x++;
      }
      while(x*x>n){
            x++;
      }
      assert(x*x==n);
      vector<int> v;
      for (int i = 2; i * i <= x; i++)
      {
            if (x % i == 0)
            {
                  while (x % i == 0)
                  {
                        v.push_back(i);
                        x /= i;
                  }
            }
      }
      if (x > 1)
      {
            v.push_back(x);
      }
      cout << *max_element(v.begin(), v.end()) << '\n';
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