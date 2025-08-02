#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n == 1 && m == 1)
    {
        cout << "0" << endl;
    }
    else if (n == 2 && m == 2)
    {
        cout << "4" << endl;
    }
    else if (n >= m)
    {
        cout << n + (m - 2) * 2 + 2 << endl;
        ;
    }
    else
    {
        cout << m + (n - 2) * 2 + 2 << endl;
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
