#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
    int n, k;
    cin >> n >> k;
    int l = 1, r = n, mark = 1;
    while (l <= r)
    {
        cout << ((mark ^= 1) ? l++ : r--) << ' ';
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