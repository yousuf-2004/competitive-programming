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
    string s;
    cin >> s;
    bool ok = false;
    for (int i = 1; i < (int)(s.length()); i++)
    {
        if (s[i] != s[0])
        {
            swap(s[i], s[0]);
            ok = true;
            break;
        }
    }
    if (!ok)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << s << '\n';
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