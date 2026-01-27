#include <bits/stdc++.h>
#define int long long
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cnt = 0;
    for (auto c : s)
    {
        if (c == '1')
        {
            cnt++;
        }
    }

    if (cnt <= k || n < 2 * k)
    {
        cout << "Alice\n";
    }
    else
    {
        cout << "Bob\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}