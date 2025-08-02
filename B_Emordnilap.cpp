#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long mod = 1000000007;
    long long ans = n * (n - 1);
    ans %= mod;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
        ans %= mod;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}