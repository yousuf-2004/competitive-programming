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
      int n,m;
      cin>>n>>m;
      string s;
      cin>>s;

      set<int>st;
      for(int i=0;i<m;i++){
            int x;
            cin>>x;
            st.insert(x);
      }

      int cnt=1;
      for(char ch:s){
            cnt++;
            if(ch=='B'){
                  while(st.count(cnt)){
                        cnt++;
                  }
            }
            st.insert(cnt);
            if(ch=='B'){
                  while(st.count(cnt)){
                        cnt++;
                  }
            }
      }

      cout<<st.size()<<'\n';
      for(auto& a:st){
            cout<<a<<' ';
      }
      cout<<'\n';
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