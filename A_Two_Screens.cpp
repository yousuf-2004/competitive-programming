// J01
#include <bits/stdc++.h>
using namespace std;
#define siuuu                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define lld long long double
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define fcin(n)       \
    for (auto &x : n) \
    cin >> x
#define fcout(n)     \
    for (auto x : n) \
    cout << x << " "
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define f first
#define s second
#define endl '\n'
#define cout(x) cout << x << endl
/*
 "The harder the problem, the sweeter the victory. Keep coding!"
*/

void solve()
{
    string s1,s2;
    cin>>s1>>s2;

    int t=0;
    int ans=s1.length()+s2.length();
    for (int i=0;i<s2.length();i++){
        if(s2[i]==s1[i] and i<s1.length()){
            {
                t++;

            }}
            else break;
    }
    if (t) ans++;
    
    ans-=t;
    cout(ans);
}


int main()
{
    siuuu

        int t;
    t = 1;

    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}