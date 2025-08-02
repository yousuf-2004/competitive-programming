#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }
    int mx = max_element(v.begin(), v.end()) - v.begin();
    int mn = min_element(v.begin(), v.end()) - v.begin();

    if (mx + mn == 3)
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
}