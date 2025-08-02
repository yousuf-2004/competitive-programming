#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    int m = 10;
    if (n < 11)
    {
        cout << n << endl;
        return;
    }
    for (int i = 1; i <= 10; i++)
    {
        int v = m * i;
        if (v > n)
        {
            break;
        }
        cnt++;
        if (i == 10)
        {
            m = m * 10;
            i = 1;
        }
    }
    cout << cnt + 9 << endl;
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