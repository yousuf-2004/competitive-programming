#include <iostream>
using namespace std;

bool ok(int n, int m)
{
    if (n == m)
    {
        return true;
    }
    else if (n % 3 != 0)
    {
        return false;
    }
    else
    {
        return (ok(n / 3, m) || ok(2 * n / 3, m));
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    cout << (ok(n, m) ? "YES" : "NO") << '\n';
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