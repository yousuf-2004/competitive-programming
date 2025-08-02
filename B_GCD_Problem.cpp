#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "2 " << n - 1 - 2 << " 1" << endl;
    }
    else
    {
        int k = (n - 1) / 2;
        if (k % 2 == 0)
        {
            cout << k - 1 << " " << k + 1 << " 1" << endl;
        }
        else
        {
            cout << k - 2 << " " << k + 2 << " 1" << endl;
        }
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