#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
bool squares(int n)
{
    int m = sqrt(n);
    return (m * m == n);
}
void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0 && squares(n / 2))
    {
        cout << "YES" << endl;
    }
    else if (n % 4 == 0 && squares(n / 4))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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