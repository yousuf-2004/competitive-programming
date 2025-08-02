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
    bool yes = false;
    set<int> c;
    for (int i = n - 1; i >= 0; i--)
    {
        if (c.count(v[i]))
        {
            cout << i + 1 << endl;
            yes = true;
            break;
        }
        c.insert(v[i]);
    }
    if (!yes)
    {
        cout << "0" << endl;
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