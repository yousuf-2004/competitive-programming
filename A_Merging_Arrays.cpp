#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + m);
    for (int i = 0; i < n + m; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (auto a : a)
    {
        cout << a << " ";
    }
    cout << "\n";
}

int main()
{
    solve();
}