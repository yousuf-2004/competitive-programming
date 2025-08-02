#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << "\n";
    }
    else if (n % 2)
    {
        cout << -1 << "\n";
    }
    else
    {
        vector<int> a(n);
        iota(a.begin(), a.end(), 1);
        for (int i = 0; i < n; i += 2)
        {
            swap(a[i], a[i + 1]);
        }
        for (const auto &it : a)
        {
            cout << it << ' ';
        }
        cout << endl;
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
    return 0;
}
