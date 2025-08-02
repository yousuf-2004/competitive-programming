#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
    string a, b;
    cin >> a >> b;
    auto mul = [](string s, int k) -> string
    {
        string res = "";
        while (k--)
            res += s;
        return res;
    };
    int a_size = a.size();
    int b_size = b.size();
    int g = __gcd(a_size, b_size);
    if (mul(a, b_size / g) == mul(b, a_size / g))
    {
        cout << mul(a, b_size / g) << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}