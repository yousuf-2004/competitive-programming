#include <iostream>
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    if (x > y)
    {
        swap(x, y);
    }
    if (x || !y || (n - 1) % y)
    {
        cout << -1 << endl;
        return;
    }
    for (int k = 2; k <= n; k += y)
    {
        for (int i = 1; i <= y; i++)
        {
            cout << k << ' ';
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
}