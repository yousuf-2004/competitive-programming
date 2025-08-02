#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i - 1];
    }
    sort(a.begin(), a.end());
    vector<long long> prev(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        prev[i] = prev[i - 1] + a[i - 1];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << pref[r] - pref[l - 1] << endl;
        }
        else
        {
            cout << prev[r] - prev[l - 1] << endl;
        }
    }
}

int main()
{
    solve();
}
