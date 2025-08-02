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


const ll M = 1e9 + 7;
 
ll powm(ll x, ll n) {
    x %= M;
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    int p = powm(x * x, n / 2);
    if (n % 2)
        return p * x % M;
    else
        return p;
}
void solve()
{
    int t;
    cin >> t;

    vi n(t),k(t);
    fcin(n);
    fcin(k);

    for (int i = 0; i <t;i++)
    {
        cout(powm(2,k[i]));
    }

}

int main()
{
    siuuu

        int t;
    t = 1;

   // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}