#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long multi1 = a * d, multi2 = b * c;

    if (multi1 == multi2)
    {
        cout << "0" << endl;
    }
    else if (multi2 != 0 && multi1 % multi2 == 0 || multi1 != 0 && multi2 % multi1 == 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "2" << endl;
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
}