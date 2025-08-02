#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = 0;
            int ci = i, cj = j;
            while (ci >= 0 && ci < n && cj >= 0 && cj < m)
            {
                sum += a[ci][cj];
                ci--;
                cj--;
            }
            ci = i, cj = j;
            while (ci >= 0 && ci < n && cj >= 0 && cj < m)
            {
                sum += a[ci][cj];
                ci++;
                cj--;
            }
            ci = i, cj = j;
            while (ci >= 0 && ci < n && cj >= 0 && cj < m)
            {
                sum += a[ci][cj];
                ci--;
                cj++;
            }
            ci = i, cj = j;
            while (ci >= 0 && ci < n && cj >= 0 && cj < m)
            {
                sum += a[ci][cj];
                ci++;
                cj++;
            }
            sum -= a[i][j] * 3;
            mx = max(mx, sum);
        }
    }
    cout << mx << endl;
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