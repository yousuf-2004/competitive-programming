#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int mn = INT_MAX;
    for (int i = 0; i <= m - n; i++)
    {
        mn = min(mn, a[i + n - 1] - a[i]);
    }
    cout << mn << endl;
}

int main()
{
    solve();
}