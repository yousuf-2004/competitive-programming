#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    map<char, long long> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second % k != 0)
        {
            cout << "-1" << endl;
            return;
        }
    }
    string st;
    for (auto it : mp)
    {
        int cnt = it.second / k;
        st += string(cnt, it.first);
    }
    string result;
    for (int i = 0; i < k; i++)
    {
        result += st;
    }
    cout << result << endl;
}

int main()
{
    solve();
}