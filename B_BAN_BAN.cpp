#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int initial = 1, multi = n * 3;
    cout << n / 2 + n % 2 << endl;
    while (initial < multi)
    {
        cout << initial << " " << multi << endl;
        initial += 3;
        multi -= 3;
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
    return 0;
}