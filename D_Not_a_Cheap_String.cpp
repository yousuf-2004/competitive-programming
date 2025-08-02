#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    string w(s);
    sort(w.rbegin(), w.rend());
    int amount = 0;
    for (int i = 0; i < s.length(); i++)
    {
        amount += s[i] - 'a' + 1;
    }
    map<char, int> mp;
    for (int i = 0; i < w.length(); i++)
    {
        if (amount > n)
        {
            mp[w[i]]++;
            amount -= w[i] - 'a' + 1;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (mp[s[i]] > 0)
        {
            mp[s[i]]--;
            continue;
        }
        cout << s[i];
        }
    cout << endl;
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