#include <iostream>
#include <math.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    if (n & 1 || n < 4)
    {
        cout << "-1" << endl;
        return;
    }
    if (n % 6 == 0)
    {
        cout << n / 6 << " ";
    }
    else if (n % 6 != 0)
    {
        cout << (n / 6) + 1 << " ";
    }

    cout << n / 4 << endl;
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