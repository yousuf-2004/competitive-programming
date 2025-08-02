#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, x, i, y, z = 0;
    cin >> x >> n;
    y = n % 4;
    if (y == 1)
    {
        z = -n;
    }
    else if (y == 2)
    {
        z = 1;
    }
    else if (y == 3)
    {
        z = n + 1;
    }
    if (x & 1)
    {
        cout << x - z << endl;
    }
    else
    {
        cout << x + z << endl;
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
}