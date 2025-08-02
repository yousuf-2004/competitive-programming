#include<bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve(){
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        b.push_back(x);
    }   
    map<int,int> fr_a, fr_b;
    int cons = 0;
    for(int i=0; i<n; i++){
        cons++;
        if(i ==n-1 or a[i+1]!=a[i]){
            if(fr_a.find(a[i])==fr_a.end()){
                 fr_a[a[i]] =  cons;
            }
            else{
                 fr_a[a[i]] = max(fr_a[a[i]], cons);
            }
            cons = 0;
        }
    }
    for(int i=0; i<n; i++){
        cons++;
        if(i ==n-1 or b[i+1]!=b[i]){
            if(fr_b.find(b[i])==fr_b.end()){
                fr_b[b[i]] = cons;
            }
            else{
                 fr_b[b[i]] = max(fr_b[b[i]], cons);
            }
            cons = 0;
        }
    }
    int ans = 0;
     for (auto it = fr_a.begin(); it != fr_a.end(); ++it) {
        int v = it->first;
        ans = max(ans, fr_a[v] + fr_b[v]);
    }
    for (auto it = fr_b.begin(); it != fr_b.end(); ++it) {
        int v = it->first;
        ans = max(ans, fr_a[v] + fr_b[v]);
    }

    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
