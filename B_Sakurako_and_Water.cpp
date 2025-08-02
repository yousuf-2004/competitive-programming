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
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> v[i][j];
        }
    }

    vector<int> a(n * 2 - 1, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; ++j)
        {
            a[i - j + n - 1] = min(a[i - j + n - 1], v[i][j]);
        }
    }
    int ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < 0)
        {
            ans -= a[i];
        }
    }
    cout << ans << endl;
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