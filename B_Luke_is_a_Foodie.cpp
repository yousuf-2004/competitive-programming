#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    int mn = a[0], mx = a[0];
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
        if (mx - x > mn + x)
        {
            ans++;
            mn = a[i];
            mx = a[i];
        }
    }
    cout << ans << endl;
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