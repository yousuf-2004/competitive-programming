#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].second;
    }
    sort(p.begin(), p.end());

    for (int i = 0; i < n; i++)
    {
        cout << p[i].first << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p[i].second << " ";
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
    return 0;
}
