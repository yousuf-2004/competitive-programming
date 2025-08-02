#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<long long> v(n + m);

    for (int i = 0; i < n + m; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end() - 1);
    reverse(v.begin(), v.end());
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    cout << sum << endl;
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