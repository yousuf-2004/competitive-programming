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
      vector<int> x(n), y(n);
      for (int i = 0; i < n; i++)
      {
            cin >> x[i] >> y[i];
      }
       int count=0;

    int day=2;
    while(day<=k)
    {
        for (auto u: x)
        {
            if ((day%u==0)and (day+1<=k))
            {
                count++;
                break;
            }
        }
        day++;
    }
    cout<<count<<"\n";
}

signed main()
{
      int t;
      cin >> t;
      for(int i = 1; i <= t; i++){
            cout<<"Case "<<i<<": ";
            solve();
      }
            
      return 0;
}