#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int plus = n;
    int sum = n;
    while (plus > 9)
    {
        int div = plus / 10;
        int m = plus - (div * 10);
        plus = div + m;
        sum += div;
    }
    cout << sum << endl;
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