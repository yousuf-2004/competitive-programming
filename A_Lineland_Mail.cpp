#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    long long mx, mn;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            mx = abs(a[i] - a[n - 1]);
            mn = abs(a[i] - a[i + 1]);
            cout << mn << " " << mx << endl;
            continue;
        }
        if (i == (n - 1))
        {
            mx = abs(a[i] - a[0]);
            mn = abs(a[i] - a[i - 1]);
            cout << mn << " " << mx << endl;
            continue;
        }
        mx = max(abs(a[i] - a[0]), abs(a[i] - a[n - 1]));
        mn = min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));
        cout << mn << " " << mx << endl;
    }
}

int main()
{
    solve();
}