#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n <= 2)
    {
        cout << 0 << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }

    int k = n / 2;
    if (n % 2 == 0)
    {
        k--;
    }
    sort(a.begin(), a.end());
    int c = 0;
    vector<int> b(n);
    for (int i = 1; i < n; i += 2, c++)
    {
        b[i] = a[c];
    }
    for (int i = 0; i < n; i += 2, c++)
    {
        b[i] = a[c];
    }
    cout << k << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}

int main()
{
    solve();
}