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
    map<int, int> mp;
    for (auto it : v)
    {
        mp[it]++;
    }
    vector<int> v1;
    for (auto it : mp)
    {
        if (it.second >= 2)
        {
            v1.push_back(it.first);
        }
    }
    if (v1.size() < 2)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> b;
    bool ok1 = false, ok2 = false;

    for (auto it : v)
    {
        if (it == v1[0])
        {
            b.push_back(ok1 ? 2 : 1);
            ok1 = true;
        }
        else if (it == v1[1])
        {
            b.push_back(ok2 ? 3 : 1);
            ok2 = true;
        }
        else
        {
            b.push_back(1);
        }
    }

    for (auto val : b)
    {
        if (val > 0)
            cout << val << " ";
    }
    cout << "\n";
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