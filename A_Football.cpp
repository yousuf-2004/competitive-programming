#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    int max_val = 0;
    string ans = "";
    for (auto pr : mp)
    {
        if (pr.second > max_val)
        {
            max_val = pr.second;
            ans = pr.first;
        }
    }
    cout << ans << endl;
}

int main()
{
    solve();
}