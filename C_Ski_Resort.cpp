#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long ans = 0;
    int length = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= q)
        {
            length++;
        }
        else
        {
            if (length >= k)
            {
                ans += (long long)(length - k + 1) * (length - k + 2) / 2;
            }
            length = 0;
        }
    }

    if (length >= k)
    {
        ans += (long long)(length - k + 1) * (length - k + 2) / 2;
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