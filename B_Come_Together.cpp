#include <bits/stdc++.h>
using namespace std;

int distance(const pair<int, int> &a, const pair<int, int> &b)
{
    return abs(a.first - b.first) + abs(a.second - b.second);
}
void solve()
{
    pair<int, int> a, b, c;

    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    cin >> c.first >> c.second;

    int d1 = distance(a, b);
    int d2 = distance(a, c);
    int d3 = distance(b, c);
    int ans = ((d1 + d2 - d3) / 2) + 1;
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}