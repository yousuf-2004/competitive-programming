#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        p[i]--;
    }

    int bad = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i] % k != i % k)
        {
            bad++;
        }
    }

    if (bad == 0)
    {
        cout << 0 << '\n';
    }
    else if (bad == 2)
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << -1 << '\n';
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