#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt++;
        if (i == n - 1 || s[i] != s[i + 1])
        {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    cout << ans + 1 << endl;
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