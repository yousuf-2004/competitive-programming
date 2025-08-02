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
      int n, k;
      cin >> n >> k;

      k--;
      if (n % 2 == 0)
      { // no collision
            cout << (k % n) + 1 << '\n';
      }
      else
      {
            int val = n / 2;                           // collision
            cout << ((k + (k / val)) % n) + 1 << '\n'; // steps=(k/val)
      }
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