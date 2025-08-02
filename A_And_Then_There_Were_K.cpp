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
      int msb = 0;
      /* for(int i=30;i>=0;i--){
            if((n>>i)&1){
                  msb=i;
                  break;
            }
      } */
      msb = __lg(n);
      cout << (1 << msb) - 1 << '\n';
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