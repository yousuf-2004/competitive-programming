#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int cnt = 0;
    for (auto a : mp)
    {
        cnt++;
    }
    for (int k = 1; k <= n; k++)
    {
        cout << max(k, cnt) << " ";
    }
    cout << endl;
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