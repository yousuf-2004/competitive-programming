#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> cnt(3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[j] % 3 == i)
            {
                cnt[i]++;
            }
        }
    }
    int ans = 0;
    while (*min_element(cnt.begin(), cnt.end()) != n / 3)
    {
        for (int i = 0; i < 3; i++)
        {
            if (cnt[i] > n / 3)
            {
                ans++;
                cnt[(i + 1) % 3]++;
                cnt[i]--;
            }
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