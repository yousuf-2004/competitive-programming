#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "YES" << endl;
        for (i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << "-1" << " ";
            }
            else
            {
                cout << "1" << " ";
            }
        }
        cout << endl;
    }
    else if (n % 2 == 1 && n < 5)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;

        int k = (n - 1) / 2;
        int a = k - 1;
        int b = -k;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << a << " ";
            }
            else
            {
                cout << b << " ";
            }
        }
        cout << endl;
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