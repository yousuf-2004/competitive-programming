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
      vector<int> a(n);
      vector<int> b(n);
      for(int i = 0; i < n; i++){
            cin>>a[i];
            cin>>b[i];
      }
      int ans = 0;
      map<int ,vector<int>>mp;
      for(int i = 0; i < n; i++){
            mp[a[i]].push_back(b[i]);
      }
      for(int i=1;i<=n;i++){
            if(mp[i].empty()){
                  continue;
            }
            sort(mp[i].rbegin(),mp[i].rend());
      }
      for(auto [v,lights]:mp){
            int on=0;
            for(int l:lights){
                  if(on==v){
                        break;
                  }
                  on++;
                  ans+=l;
            }
      }
      cout<<ans<<endl;
}

signed main()
{
      int t = 1;
      cin >> t;
      while (t--)
            solve();
      return 0;
}