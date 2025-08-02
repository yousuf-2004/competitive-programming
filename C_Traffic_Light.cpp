#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    s += s;
    if (c == 'g')
    {
        cout << 0 << endl;
        return;
    }
    int cnt = 0, res = 0;
    bool flag = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'g')
        {
            res = max(cnt, res);
            flag = false;
        }
        else if (s[i] == c && flag == false)
        {
            cnt = 0;
            flag = true;
        }
        if (flag)
        {
            cnt++;
        }
    }
    cout << res << endl;
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