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
    vector<long long> v(n);
    long long sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] < 0)
        {
            cnt++;
            v[i] = -v[i];
        }
        sum += v[i];
    }
    sort(v.begin(), v.end());
    if (cnt & 1)
    {
        sum -= 2 * v[0];
    }
    cout << sum << "\n";
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