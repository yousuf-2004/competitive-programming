#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    /* int x = 1^3^2^2;
    cout<<x<<endl;  */
    if (n % 2 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << n << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "1 " << "3 ";
        for (int i = 0; i < n - 2; i++)
        {
            cout << "2" << " ";
        }
        cout << endl;
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