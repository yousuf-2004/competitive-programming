#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n;
    cin >> n;

    vector<long long> pref(s.length() + 1, 0);
    for (int i = 0; i < s.length(); i++)
    {
        pref[i + 1] = pref[i] + (s[i] == 'a' ? 1 : 0);
    }

    while (n--)
    {
        long long l, r;
        cin >> l >> r;
        long long ans = pref[r] - pref[l - 1];
        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
