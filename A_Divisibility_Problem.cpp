#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;
    long long ans;
    if (a > b)
    {
        long long k = (a + b - 1) / b;
        ans = k * b - a;
    }
    else
    {
        ans = b - a;
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
