#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "0" << endl;
        return;
    }
    int k = n / 2;
    long long sum = 0;
    for (int i = 1; i <= k; i++)
    {
        sum += (i * 1ll * i);
    }
    cout << sum * 8 << endl;
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