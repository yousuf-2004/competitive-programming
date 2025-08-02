#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/
void solve()
{
    int w, h;
    cin >> w >> h;
    long long ans = 0;
    for (int i = 0; i < 4; i++)
    {
        int k;
        cin >> k;
        vector<long long> points(k);
        for (int j = 0; j < k; j++)
        {
            cin >> points[j];
        }

        ans = max(ans, (points[k - 1] - points[0]) * (i < 2 ? h : w));
    }
    cout << ans << "\n";
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
