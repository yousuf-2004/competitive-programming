#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int>q;
    q.push_back(1);
    q.push_back(2);
    q.push_back(3);
    auto it=*max_element(q.begin(),q.end());
    cout<<it<<'\n';
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop_front();
    }
    cout<<endl;
}