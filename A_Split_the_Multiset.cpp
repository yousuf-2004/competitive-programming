#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int count = 0, current = n;

    while (current > 1)
    {
        int m = min(k, current);
        current -= (m - 1);
        count++;
    }

    cout << count << endl;
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
