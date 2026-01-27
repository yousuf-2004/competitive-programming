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
      int n,m,k;
      cin>>n>>m>>k;
      vector<int>a(n);
      for(int i=0;i<n;i++){
            cin>>a[i];
      }

      vector<int>diff;
      diff.push_back(a[0]);
      for(int i=1;i<n;i++){
            int x=a[i]-a[i-1];
      }
      while(m--){
            int l,r,d;
            cin>>l>>r>>d;
            diff[l]+=d;
            diff[r+1]-=d;
      }
      
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