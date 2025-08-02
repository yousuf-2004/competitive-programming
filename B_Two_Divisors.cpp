#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;
    long long lcm = (a * b) / __gcd(a, b);
    if (lcm == b)
    {
        cout << (lcm * b) / a << endl;
        return;
    }

    cout << lcm << endl;
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