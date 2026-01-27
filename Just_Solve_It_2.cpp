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
      int a,b,p;
      cin>>a>>b>>p;
      cout<<a%p<<'\n';
      cout<<(a%p)*(b%p)<<'\n';
      cout<<(a%p)/(b%p)<<'\n';     
}

signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t = 1;
      //cin >> t;
      while (t--)
            solve();
      return 0;
}