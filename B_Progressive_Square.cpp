#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c, d;
    cin >> n >> c >> d;
    vector<long long> v1(n * n);
    for (int i = 0; i < n * n; i++)
    {
        cin >> v1[i];
    }
    sort(v1.begin(), v1.end());
    vector<long long> v2(n * n);
    v2[0] = v1[0];
    for (int i = 1; i < n; i++)
    {
        v2[i] = v2[i - 1] + c;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v2[i * n + j] = v2[(i - 1) * n + j] + d;
        }
    }
    sort(v2.begin(), v2.end());
    if (v1 == v2)
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
    {
        solve();
    }
    return 0;
}