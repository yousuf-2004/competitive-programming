#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> p;
    p.push_back(a);

    for (int j = n; j > 0; j--)
    {
        if (j != a && j != b)
        {
            p.push_back(j);
        }
    }

    p.push_back(b);

    if (p.size() == n && *min_element(p.begin(), p.begin() + n / 2) == a && *max_element(p.begin() + n / 2, p.end()) == b)
    {
        for (auto a : p)
        {
            cout << a << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "-1" << endl;
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