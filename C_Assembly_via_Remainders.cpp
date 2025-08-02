#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int S = 1000;
    cout << S << " ";
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        S += x;
        cout << S << " ";
    }
    cout << endl;
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