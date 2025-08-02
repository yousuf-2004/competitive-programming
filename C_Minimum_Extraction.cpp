#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    long long mn = v[0];
    long long mx = 0;
    for (int i = 0; i < n; i++)
    {
        v[i] -= mx;
        mx += v[i];
        mn = max(mn, v[i]);
    }
    cout << mn << endl;
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