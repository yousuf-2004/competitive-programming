#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long cur_sum = 0;
        set<long long> cnt;
        cnt.insert(0);

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            cur_sum += a[i];

            if (cnt.count(cur_sum))
            {
                ans++;
                cnt.clear();
                cnt.insert(0);
                cur_sum = 0;
            }
            else
            {
                cnt.insert(cur_sum);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
