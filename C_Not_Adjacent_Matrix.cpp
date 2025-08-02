#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = n * n;
    if (n == 2)
    {
        cout << "-1" << endl;
        return;
    }
    int cnt = 0;
    for (int i = 1; i <= ans; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
            cnt++;
            if (cnt == n)
            {
                cnt = 0;
                cout << endl;
            }
        }
    }
    for (int i = 1; i <= ans; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
            cnt++;
            if (cnt == n)
            {
                cnt = 0;
                cout << endl;
            }
        }
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