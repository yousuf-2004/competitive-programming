#include <bits/stdc++.h>
using namespace std;

const int MAX = 50000;
vector<int> last(MAX + 777, 0);
void solve()
{
    int m;
    cin >> m;
    vector<vector<int>> a(m);
    for (int day = 0; day < m; day++)
    {
        int n;
        cin >> n;
        a[day].resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[day][i];
            last[a[day][i]] = day;
        }
    }
    vector<int> ans(m, -1);
    for (int day = 0; day < m; day++)
    {
        for (auto x : a[day])
        {
            if (last[x] == day)
            {
                ans[day] = x;
                break;
            }
        }
        if (ans[day] == -1)
        {
            cout << "-1\n";
            return;
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << ans[i] << " ";
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