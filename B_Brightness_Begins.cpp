#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long l = 1, r = 2e18, ans = 0;

    while (l <= r)
    {
        long long mid = (l + r) / 2;
        long long b = sqrt(mid);
        while (b * b > mid)
        {
            b--;
        }
        while ((b + 1) * (b + 1) <= mid)
        {
            b++;
        }

        long long cnt = mid - b;

        if (cnt >= n)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
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
