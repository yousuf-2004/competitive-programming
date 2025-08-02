#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long l = 1, r = n;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            cout << l << " ";
            l++;
        }
        else
        {
            cout << r << " ";
            r--;
        }
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