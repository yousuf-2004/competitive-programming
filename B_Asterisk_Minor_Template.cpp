#include <bits/stdc++.h>
using namespace std;

#define ll long long
/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
    string a, b, fir="",sec="";
        ll a_sz , b_sz;
        cin>>a>>b;
        a_sz = (ll)a.size();
        b_sz = (ll)b.size();
        for(ll i = 0 ; i < (a_sz-1) ; i++) {
            for(ll j = 0 ; j < (b_sz-1); j++) {
                if(a[i] == b[j] and a[i+1] == b[j+1]) {
                    fir = a[i];
                    sec = a[i+1];
                    break;
                }
            }
            if(fir!="")
                break;
        }
        if(fir!="") {
            cout<<"YES"<<endl;
            cout<<"*"<<fir<<sec<<"*"<<endl;
        }
        else {
            if(a[0] == b[0]) {
                cout<<"YES"<<endl;
                cout<<a[0]<<"*"<<endl;
            }
            else if(a[a_sz-1] == b[b_sz-1]) {
                cout<<"YES"<<endl;
                cout<<"*"<<a[a_sz-1]<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}