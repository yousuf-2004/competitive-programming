#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    bool srt = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i)
        {
            srt = false;
        }
    }
    if (srt)
    {
        cout << "0" << endl;
        return;
    }
    if (a[0] == 0 || a[n - 1] == n - 1)
    {
        cout << "1" << endl;
    }
    else if (a[0] == n - 1 && a[n - 1] == 0)
    {
        cout << "3" << endl;
    }
    else
    {
        cout << "2" << endl;
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