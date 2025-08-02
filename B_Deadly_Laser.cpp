#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;
    if (min(sx - 1, m - sy) <= d and min(n - sx, sy - 1) <= d)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << n + m - 2 << endl;
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