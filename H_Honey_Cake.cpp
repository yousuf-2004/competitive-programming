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
      int w, h, d;
      cin >> w >> h >> d;
      int n;
      cin >> n;

      /* 
      
         . Let Wp = gcd(n, w) and let nw = n/wp.
         . Let hp = gcd(nw,h) and let nh = nw/hp.
         . Let dp = gcd(nh,d) and let nd = nh/dp.

         The answer exists if the remaining nd = 1 and the answer is wc = Wp - 1, hc =hp -1, dc = dp - 1.
         
      */

      int Wp = gcd(n, w);
      int nw = n / Wp;

      int hp = gcd(nw, h);
      int nh = nw / hp;

      int dp = gcd(nh, d);
      int nd = nh / dp;

      if (nd == 1)
      {
            int wc = Wp - 1;
            int hc = hp - 1;
            int dc = dp - 1;
            cout << wc << " " << hc << " " << dc << "\n";
      }
      else
      {
            cout << -1 << "\n";
      }
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