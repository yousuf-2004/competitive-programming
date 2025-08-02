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
      int n,k;
      cin >> n>>k;
      vector<int> a(n);
      for (int i = 0; i < n; ++i)
      {
            cin >> a[i];
      }
      int ans = INT_MAX;
      for(int i = 0; i < n; ++i){
            ans&= a[i];
      }
      if(ans<k){
            cout<<"YES"<<endl;
      }
      else{
            cout<<"NO"<<endl;
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