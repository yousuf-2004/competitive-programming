#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        string temp = s.substr(i, 2);
        if (mp.find(temp) != mp.end())
        {
            if (mp[temp] < i - 1)
            {
                cout << "YES" << endl;
                return;
            }
        }
        else
        {
            mp[temp] = i;
        }
    }
    cout << "NO" << endl;
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