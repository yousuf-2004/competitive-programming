#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

void solve()
{
    long long x, y, a, b;
    cin >> x >> y;
    cin >> a >> b;
    b = min(b, a + a);
    if (x < y)
    {
        swap(x, y);
    }
    long long sum = (y * b + (x - y) * a);
    cout << (sum) << endl;
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