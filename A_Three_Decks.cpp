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
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    if (sum % 3 != 0)
    {
        cout << "NO\n";
        return;
    }
    sum /= 3;
    if (a > sum || b > sum)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
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