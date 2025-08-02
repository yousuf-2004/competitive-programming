#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    string s;
    cin >> s;
    vector<tuple<char, int, int>> p;
    for (int i = 0; i < n; i++)
    {
        p.push_back({s[i], v[i], i});
    }
    sort(p.begin(), p.end());

    vector<int> q(n, -1);
    for (int i = 0; i < n; i++)
    {
        q[get<2>(p[i])] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << q[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}