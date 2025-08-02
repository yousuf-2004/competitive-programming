#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    if (k == 1)
    {
        cout << n << endl;
        return;
    }
    while (n > 0)
    {
        cnt += n % k;
        n /= k;
    }
    cout << cnt << endl;
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